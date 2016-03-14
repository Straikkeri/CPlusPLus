#include "H07T02.h"

void h07t02::FunktioCee(int a)
{
	cout << endl << "a:n arvo: " << a << endl;
	a++;
	cout << "FunktioCee: a:n arvo  " << a << " ja osoite " << &a << endl;
}

void h07t02::viittausFunktioCee(int *a)
{
	cout << endl << "a:n arvo: " << *a << endl;
	*a = *a + 1; // miksi toimii eikä *a++ toimi????
	cout << "FunktioCee: a:n arvo  " << a << " ja osoite " << &a << endl;
}

void h07t02::viittausFunktioCplus(int &a) // ei osoite vaan referenssi alkuperäiseen aahan sen alkuperäisessä sijainnissa, sisältää a:n arvon.
{
	cout << endl << "a:n arvo: " << a << endl;
	a++;
	cout << "FunktioCee: a:n arvo  " << a << " ja osoite " << &a << endl;
}

void h07t02::viittausFunktioCeeRef(int **a)
{
	cout << endl << "a:n arvo: " << a << endl;
	
	**a = **a + 1;
	cout << "FunktioCee: a:n arvo  " << a << " ja osoite " << &a << endl;
}