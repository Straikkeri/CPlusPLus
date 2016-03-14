#include <iostream>
#include "H07T02.h"

using namespace std;

int main()
{
	int a = 10;

	h07t02 olio;

	// Tavallinen funktiokutsu
	cout << endl << "main: a = " << a << " ja &a = " << &a << endl;
	olio.FunktioCee(a);
	cout << "main: a = " << a << " ja &a = " << &a << endl << endl;

	// Funktiokutsu käyttäen C:n osoittimia. Tässä osoitin välitetään arvona (passed by value). 
	// Argumenttina muistiosoite (&a) -> voidaan antaa osoittimelle
	cout << endl << "main: a = " << a << " ja &a = " << &a << endl;
	olio.viittausFunktioCee(&a);
	cout << "main: a = " << a << " ja &a = " << &a << endl << endl;

	// Funktiokutsu, jossa itse funktiossa käytetään C++:n viittausmuuttujaa (reference variable)
	cout << endl << "main: a = " << a << " ja &a = " << &a << endl;
	olio.viittausFunktioCplus(a);
	cout << "main: a = " << a << " ja &a = " << &a << endl << endl;

	// Funktiokutsu käyttäen C:n osoittimia välittäen itse osoitin viitteenä (passed by reference)

	int* p_a = &a;
	int** p_p_a(&p_a); // Osoitin osoittimeen

	cout << endl << "main: a = " << a << " ja &a = " << &a << endl;
	olio.viittausFunktioCeeRef(p_p_a);
	cout << "main: a = " << a << " ja &a = " << &a << endl << endl;

	system("pause");

	return(0);
}



