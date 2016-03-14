#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// Harj. 6 Teht 1 pohja (Voit k�ytt�� my�s omaa versioita Piste-luokasta)
// Harj. aiheena m��ritell��n iostream-luokan tulostusoperaattori uudelleen luokalle Piste.
// T�m� vaatii ns. yst�v�funktion kirjoittamisen luokalle

// Sis�lt�� yhden pisteen tiedot

class PisteException {
	private:
		string message;
public:
	PisteException(string m) : message(m) {}
	string getMessage() {
		return "pisteException: " + message;
	}
};

class Piste {
public:
	Piste() {};
	Piste(float, float, char*);
	Piste(const Piste& p);
	~Piste();
	float laske_etaisyys();
	void  tulosta();
	friend ostream& operator<<(ostream& output, const Piste& p);
private:
	float x;
	float y;
	char *nimi;
};



Piste::Piste(float x, float y, char *n) {

	if (x < 0 || x > 1024 || y < 0 || y > 768) throw PisteException("pisterajan ulkopuolella");
	if (strlen(n) > 20) throw PisteException("mjono liian pitka!");
	this->x = x;
	this->y = y;
	this->nimi = n;
}

float Piste::laske_etaisyys() {
	return sqrt(this->x*this->x + this->y*this->y);
}

void Piste::tulosta() {
	cout << "(" << this->x << "," << this->y << ")et�isyys origosta = " << laske_etaisyys() << endl;
}

// kopiointi alustaja, copy constructor. 
// T�m� pit�isi tehd� automaattisesti kaikkiin C++ luokkiin
Piste::Piste(const Piste& p) {
	x = p.x;
	y = p.y;
	nimi = p.nimi;
}

Piste::~Piste() {
	cout << "destruktoria kutsuttu ..." << this->nimi << endl;
}

//Yst�v�luokan metodi 
ostream& operator<<(ostream& output, const Piste& p) {
	output << *p.nimi << "(" << p.x << ", " << p.y << ")";
	return output;
}
// Lis�teht�v�: m��rittelee >> operaattori Piste-luokalle


int main(void)
{
	// Muistia varataan viidelle pisteelle
	Piste *pisteet = new Piste[5];
	int   n = 0;

	// Sy�tteen lukeminen
	float x, y;

	cout << "Anna arvot pisteelle seuraavasti: nimi x y" << endl;
	while (n < 5) {
		char* nimi = new char[40];
		cin >> nimi >> x >> y;
		try {
			Piste tempPiste(x, y, nimi);
			pisteet[n] = tempPiste; // kutsuu kopiointialustajaa
			n++;
		}
		catch (PisteException ex) { 
			cout << ex.getMessage() << endl; 

		}
	}

	// Kaikki et�isyydet laskettu ja tulostettu kerralla
	for (int i = 0; i<5; i++) {
		// 
		cout << pisteet[i] << endl;
	}
	delete[] pisteet; // muistin vapautus
	return 0;
}