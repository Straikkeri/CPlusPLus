/*Tee ohjelma, joka kysyy koirien nimiä ja ikiä. Tiedot tallennetaan tietuetaulukkoon ja tietue on määriteltävä erillisessä otsikkotiedostossa. 
Ohjelma järjestää tiedot ikä-kentän mukaan suuruusjärjestykseen (pienimmästä suurimpaan) ja   tulostaa lopuksi järjestetyn taulukon näytölle. 
Syötteiden tarkistuksia ei vaadita. Ohjelma tulee saattaa toimivaksi sekä Visual Studio- että Linux/GCC-ympäristössä.

Uusi koira? (1/0)  > 1
Koiran nimi > Turha
Koiran ika > 16
...
======================
Koira nro 0 on
Nimi:Murhe
Ika:12
======================
Koira nro 1 on
Nimi:Turha
Ika:16
======================
Koira nro 2 on
Nimi:Erhe
Ika:18
*/

#include <iostream>
#include "koirastruct.h"

using namespace std;

void main()
{


	KOIRA koira1 = {0, "ruf", 0};
	KOIRA koira2 = {0, "ruf", 0};
	KOIRA koira3 = {0, "ruf", 0};
	KOIRA koirat[3] = { koira1, koira2, koira3 };
	
	int i = 0;

	while (i < 3) {

		koirat[i].nro = i + 1;
		cout << "Koiran " << i+1 << " nimi: ";
		cin >> koirat[i].name;
		cin.get();
		cout << endl << "Koiran " << i+1 << " ika: ";
		cin >> koirat[i].age;
		cout << endl << endl;
		i++;
	}

	KOIRA tempDoggy;

	if (koirat[0].age > koirat[1].age) {

		//cout << "flipattu 1 ja 2";

		tempDoggy = koirat[1];
		koirat[1] = koirat[0];
		koirat[0] = tempDoggy;

	}

	if (koirat[1].age > koirat[2].age) {

		//cout << "flipattu 2 ja 3";

		tempDoggy = koirat[2];
		koirat[2] = koirat[1];
		koirat[1] = tempDoggy;
	}

	if (koirat[0].age > koirat[1].age) {

		//cout << "flipattu 1 ja 2";

		tempDoggy = koirat[1];
		koirat[1] = koirat[0];
		koirat[0] = tempDoggy;
	}

	int j = 0;

	while (j < 3){

		cout << "======================" << endl << "Koira nro " << j+1 << " on" << endl << "Nimi: " << koirat[j].name << endl << "Ika: " << koirat[j].age << endl;
		j++;
	}
	cout << endl;
	system("pause");

}
