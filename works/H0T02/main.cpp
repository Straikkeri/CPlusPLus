#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main() {
	string hakusana;
	map<string, string> sanakirja; //välit? < string, string >
	//compilerista kiinni. Tarkkaa tarkkaa.
	sanakirja["kissa"] = "kat";
	sanakirja["koira"] = "hund";
	sanakirja["vihainen"] = "arg";
	sanakirja["auto"] = "bil";

	map <string, string>::iterator mi;

	for (mi = sanakirja.begin(); mi != sanakirja.end(); ++mi) {
		cout << "Suomi: " << mi->first << " Ruotsi: " << mi->second << endl;
	}

	/*while (hakusana != "loppu") {
		cout << endl << "Anna suomi hakusana (lopetus: loppu)";
		cin >> hakusana;
		cout << "hakutulos: " << sanakirja[hakusana];
	}*/

	/*while (hakusana != "1") {
		cout << "\nSuomi-hakusana (lopetus: 1)";
		cin >> hakusana;
		mi = sanakirja.find(hakusana);

		if (mi != sanakirja.end()) {
			cout << "\nHakutulos: " << sanakirja[hakusana];
		} 
		else if (hakusana != "1") {
			cout << "Hakutulos: Sanaa " << hakusana << "ei löytynyt";
		}
	}
	*/

	while (hakusana != "1") {
		cout << "\nRuotsi-hakusana (lopetus: 1)";
		cin >> hakusana;

		int loytyi = 0;
		for (mi = sanakirja.begin(); mi != sanakirja.end(); ++mi) {
			if (mi->second == hakusana) {
				cout << "Suomi: " << mi->first << endl;
				loytyi = 1;
			}
		}

		if (!loytyi && hakusana != "1") {
			cout << "Hakutulos: Sanaa " << hakusana << " ei loytynyt";
		}
	}

	system("pause");
	return 0;
}