#include"KaupunginHotelli.h"
#include"Hotelli.h"
using namespace std;

KaupunginHotelli::KaupunginHotelli() {

	cout << "KaupunginHotellin konstruktori." << endl << endl;
}


void KaupunginHotelli::setTiedot(float nöf, int pöf, string röf) {
	huoneita = pöf;
	kuvaus = röf;
	etaisyys = nöf;

}

void KaupunginHotelli::setEtaisyys(float baa) {


}


float KaupunginHotelli::getEtaisyys() {

	return 0;
}

bool KaupunginHotelli::isKavelymatka() {

	if (etaisyys > 1.0) {
	
		cout << "Liian hapokasta, ei pysty. Matka yli 1km" << endl << endl;
		return false;
	}
	else {
	
		cout << "Kavelymatkahan se." << endl << endl;
		return true;
	}

} 

Hotelli::Hotelli() {

	cout << endl << endl << "Hotellin konstruktori." << endl << endl;
}

void Hotelli::setHuoneita(int num) {


}

int Hotelli::getHuoneita() {

	return 0;
}

void Hotelli::setKuvaus(string k) {


}

string Hotelli::getKuvaus() {

	return 0;
}

Hotelli::~Hotelli() {

	cout << "Hotellin dekostruktori." << endl << endl;

}

KaupunginHotelli::~KaupunginHotelli() {

	cout << "KaupunginHotellin dekostruktori." << endl << endl;

}