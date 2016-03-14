#include"Kolmio.h"
using namespace std;

Kolmio::Kolmio() {

}

Kolmio::Kolmio(Piste* p1, Piste* p2, Piste* p3) {

	pisteet[0] = p1;
	pisteet[1] = p2;
	pisteet[2] = p3;

}

Piste Kolmio::taulukonOsoite(int indeksi) {

return *pisteet[indeksi];

}

Kolmio::~Kolmio() {

}
