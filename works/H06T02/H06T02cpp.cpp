#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int MAXPIT = 20;
struct HENKILO { char enimi[MAXPIT]; char snimi[MAXPIT]; char puhnro[MAXPIT]; };

int main(void) {
	fstream tdsto("puhelin.dat", ios::binary | ios::in);
	HENKILO apuhlo = { " "," ", " " }; 
	streampos alku = tdsto.tellg();
	streampos nyk_paikka, ed_paikka, tmp, paikan_koko;
	bool quit = false;
	int input;
	int vastaus = 0;
	int positio = 0;

	paikan_koko = sizeof HENKILO;

	cout << "1 eteen, 2 taakse, 0 loppu." << endl;

	tdsto.seekg(0);

	while (!quit) {
		cin >> input;
		//cin.get();
		if (input == 2 && positio <= 1) {
			cout << endl << "Ei onnaa, menee tiedoston alun ohi." << endl;
		}
		else {
			if (tdsto.is_open()) {

				if (input == 1 || input == 2) {

					switch (input) {

					case 1: //Plaraaminen eteenp�in:
						tmp = tdsto.tellg();
						tdsto.seekg(tmp);
						positio++;
						break;
					case 2: //Taaksep�in
						tmp = tdsto.tellg();

						tmp = tmp - paikan_koko;
						tmp = tmp - paikan_koko;

						tdsto.seekg(tmp);
						positio--;
						break;
					}

					tdsto.read((char *)&apuhlo, sizeof HENKILO);
					if (!tdsto.eof()) {
						cout << apuhlo.enimi << endl;
						cout << apuhlo.snimi << endl;
						cout << apuhlo.puhnro << endl;
					}
					else {
						cout << endl << "End of file.";
						tdsto.seekg(0, ios::end);
						tdsto.clear();
					}

				}
				else {
					//kommaa t�m�n elsen sis�lt� pois jotta toimii
					cout << endl << endl << "elsessa";

					vector<HENKILO> henkil�t;

					tdsto.seekg(0);

					tdsto.read((char *)&apuhlo, sizeof HENKILO);

					int p = 0;

					while (!tdsto.eof()) {

						cout << endl << endl << "whilessa, kierros: " << p;

						henkil�t.push_back(apuhlo);

						p++;
					}

					cout << henkil�t.size(); 

					/*for (int i = 0; i < henkil�t.size(); i++) {
						cout << endl << henkil�t[i].enimi << endl;
						cout << henkil�t[i].enimi << endl;
						cout << henkil�t[i].enimi << endl;
					}*/

					/* t�h�n piti pist�� sukunimell� haku. Dynaamisesti kasvava struct?
					tdsto.seekg(0);

					while (!tdsto.eof()) {
						tdsto.read((char *)&apuhlo, sizeof HENKILO);
					}*/

				}

				//paikan_koko = (long) sizeof(HENKILO);
				//ed_paikka = tdsto.tellg();
				//nyk_paikka = ed_paikka - paikan_koko;

				//tdsto.seekg(nyk_paikka);
				//... read...
				//tdsto.seekg(nyk_paikka);
				// Miten hanskataan se, ett� ei peruuteta tiedoston alun ohi?
				// if(tdsto.seekg() >= alku) ???? Voisko olla n�in




			}
		}
	}
	return 0;
}