/*Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten että negatiivisten kokonaislukujen osuuden. Lukujen syöttö lopetetaan syöttämällä luku 0. Ohjelma tulee saattaa toimivaksi sekä Visual Studio- että Linux/GCC-ympäristössä.

Tulostus:
Syötit kokonaislukuja seuraavasti :
----------------------------------
Negatiiviset      7 kpl     70.00%
Positiiviset      3 kpl     30.00%
Yhteensä         10 kpl    100.00%


while (luku != 0) {
	cout << "Syota kokonaisluku: ";
	...
		neg_pros = (double)negatiiviset / (double)summa * 100.0;
*/

#include <iostream>
using namespace std;

void main()
{
	double negative, positive, input, amount = 0;
	negative = 0;
	positive = 0;

	while (true) {

		//cout << positive << " - " << negative << " - " << amount; for debugging
		cout << endl << "Please enter an integer, 0 to exit: ";
		cin >> input;
		cin.get();

		if(input < 0){
			negative++;
			amount++;
		}
		if (input > 0) {
			positive++;
			amount++;
		}
		if (input == 0) {
			break;
		}

	}

	cout << endl << "You gave integers as follows:" << endl << "-----------------------------" << endl << "Positive: " << amount << " integers	" << positive / amount * 100 << "%" << endl << "Negative: " << amount << " integers	" << negative / amount * 100 << "%" << endl;
		system("pause");

}
