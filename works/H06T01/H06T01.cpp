#include <iostream>
#include <fstream>

using namespace std;
const int pituus = 20;

struct HENKILO {
	char enimi[pituus]; char snimi[pituus]; char puhnro[pituus];
};
int main(void) {
	fstream tiedosto("puhelin.dat", ios::binary | ios::out | ios::app);
	HENKILO apuhlo = { " "," ", " " };
	int vastaus = 1;

	while (vastaus != 0) {
		if (tiedosto.is_open()) {
			cout << "Tietojen syotto, jatketaanko (1/0): ";
			cin >> vastaus;
			//cin >> ws;
			if (vastaus == 1) {
				cin.get();
				cout << "Anna etunimi:" << endl;
				cin.getline(apuhlo.enimi, pituus);
				cout << "Anna sukunimi:" << endl;
				cin.getline(apuhlo.snimi, pituus);
				cout << "Anna puhelinnumero:" << endl;
				cin.getline(apuhlo.puhnro, pituus);

				tiedosto.write((char *)&apuhlo, sizeof HENKILO);
			}
			else {
				tiedosto.close();
			}
		}	
	}
		return 0;
}
