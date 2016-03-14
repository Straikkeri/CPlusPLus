#include"kolmio.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	// Muistia varataan yhdelle kolmiolle, jossa kolme pistettä
	Kolmio kolmio(new Piste(1, 2), new Piste(2, 2), new Piste(4, 2));

	//cout << kolmio.taulukonOsoite() << endl << endl;

	Piste piste1 = kolmio.taulukonOsoite(0);
	Piste piste2 = kolmio.taulukonOsoite(1);
	Piste piste3 = kolmio.taulukonOsoite(2);

	cout << "Pisteen yksi koordinaatit ovat X: " << piste1.haeX() << " ja " << "Y: " << piste1.haeY() << endl << endl;
	cout << "Pisteen kaksi koordinaatit ovat X: " << piste2.haeX() << " ja " << "Y: " << piste2.haeY() << endl << endl;
	cout << "Pisteen kolme koordinaatit ovat X: " << piste3.haeX() << " ja " << "Y: " << piste3.haeY() << endl << endl;

	system("pause");

	return 0;

}