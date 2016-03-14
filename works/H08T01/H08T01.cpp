#include <iostream>
#include <cstdlib>
using namespace std;
struct Alkio {
	int luku;
	Alkio *seuraava;
};
int LisaaLuku(Alkio *&, int);
void TulostaLuvut(Alkio *);
int KysyValinta();
int PoistaLuku(Alkio *&, int);
Alkio* EtsiLuku(Alkio *&, int);

int main() {
	Alkio *alku = NULL;
	int vastaus, ok, apu;
	vastaus = KysyValinta();
	while (vastaus != 0) {
		switch (vastaus) {
		case 1:
			cout << "\nLuku: ";
			cin >> apu;
			ok = LisaaLuku(alku, apu);
			if (ok == 0)
				cout << "Tilanvaraus ei onnistunut\n";
			break;
		case 2:
			TulostaLuvut(alku);
			break;
		case 3:
			cout << "\n Poistettava luku: ";
			cin >> apu;
			ok = PoistaLuku(alku, apu);
			if (ok == 0)
				cout << "Poistettavaa ei löytynyt\n";
			break;
		case 4:
			cout << "\n Etsittava luku: ";
			cin >> apu;
			Alkio* apuAlkio = EtsiLuku(alku, apu);
			cout << "Etsittava luku loytyi osoitteesta: " << apuAlkio;
			break;
		//default:	cout << "\nVirheellinen valinta";
		} //switch
		vastaus = KysyValinta();
	} //while
	Alkio *seuraava;
	Alkio *kohdalla = alku;
	while (kohdalla) {
		seuraava = kohdalla->seuraava;
		delete kohdalla;
		kohdalla = seuraava;
	}
	return 0;
}

int KysyValinta() {
	int vastaus;
	cout << "\nVALIKKO";
	cout << "\n1) Lisää uusi luku";
	cout << "\n2) Näytä kaikki luvut";
	cout << "\n3) poista luku";
	cout << "\n4) Etsi luku";
	cout << "\n0) Lopetus\n";
	cin >> vastaus;
	system("cls");
	return vastaus;
}

int LisaaLuku(Alkio *&p_alku, int p_luku) { // *& = viittaus osoittimeen
	Alkio *uusi = new Alkio;
	if (uusi) {
		uusi->luku = p_luku; 
		uusi->seuraava = NULL;
		Alkio *kohdalla;
		if (!p_alku) {
			p_alku = uusi;
			//cout << "aivan eka luku!" << endl;
		} else {

			kohdalla = p_alku;
			//cout << "elsessa" << endl;
			while (kohdalla->seuraava) {
				//cout << "Kohdalla: " << kohdalla->luku << " p_luku: " << p_luku <<  endl;
				if (p_luku <= kohdalla->luku) { //jos alussa
					uusi->seuraava = kohdalla;
					p_alku = uusi;
					//cout << "eka luku!" << endl;
					break;
				}

				if (p_luku < kohdalla->seuraava->luku) { //jos keskellä
					uusi->seuraava = kohdalla->seuraava;
					kohdalla->seuraava = uusi;
					//cout << "ei eka eika vika luku!" << endl;
					break;
				}

				kohdalla = kohdalla->seuraava;
				//cout << "While kiertaaaa!" << endl;

			}

			if (!kohdalla->seuraava) {
				if (uusi->luku < kohdalla->luku) {
					uusi->seuraava = kohdalla;
					p_alku = uusi;
				} else {
					kohdalla->seuraava = uusi;
				}
				//cout << "vika luku!" << endl;
			}
		}
		//kohdalla->seuraava = uusi;
		return 1;
	}
	else {
		return 0;
	}
}

Alkio* EtsiLuku(Alkio *&p_alku, int p_luku) {
	
	Alkio *kohdalla;

	kohdalla = p_alku;

	while (kohdalla->seuraava) {

		if (kohdalla->luku == p_luku) {
			
			return kohdalla;

		} else {
			kohdalla = kohdalla->seuraava;
		}
	}
}

int PoistaLuku(Alkio *&p_alku, int p_luku) { // *& = viittaus osoittimeen
	
	Alkio *edellinen = NULL;
	Alkio *pois = p_alku; //pois on ehdokas poistettavaksi
	
	while (pois != NULL && pois->luku != p_luku) {	//ei listan loppu, ei poistettava: plarataan eteenpäin
		edellinen = pois;
		pois = pois->seuraava;
	}
	if (pois == NULL) {
		return 0;
	} else { //poistettava löytyi
		if (pois == p_alku) {
			p_alku = pois->seuraava;
		} else {
			edellinen->seuraava = pois->seuraava;
		}
		delete pois;
		return 1;
	}
}


void TulostaLuvut(Alkio *p_alku) {
	Alkio *kohdalla;
	kohdalla = p_alku;
	while (kohdalla) {
		cout << "\nLuku: " << kohdalla->luku;
		cout << " osoite: " << &kohdalla->luku;
		kohdalla = kohdalla->seuraava;
	}
}