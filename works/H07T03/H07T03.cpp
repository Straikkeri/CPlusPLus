#include <iostream>

using namespace std;

int main()
{
	
	
	int *ptr;       // osoitin kokonaislukuun nro
	int a, b, c;    // K‰ytet‰‰n vain muistin varausta varten
	int nro;
	int **ptr_ptr = &ptr; // osoitin osoittimeen, josta osoitin kokonaislukuun nro

	//a) muuta numeron arvoa

	ptr = &nro;

	cout << "nro:n muistiosoite: " << &nro << endl << endl;

	cout << "ptr:n arvo: " << ptr << endl << endl;

	cout << "ptr:n muistiosoite: " << &ptr << endl << endl;

	cout << "ptr_ptr:n arvo: " << ptr_ptr << endl << endl;

	nro = 5;
	
	cout << "nro: " << nro << endl << endl;

	*ptr = 6;

	cout << "nro: " << nro << endl << endl;

	**ptr_ptr = 7;

	cout << "nro: " << nro << endl << endl;

	system("pause");
 
}