#ifndef KOLMIOH
#define KOLMIOH
#include"Piste.h"
using namespace std;

class Kolmio {
public:
	Kolmio();
	Kolmio(Piste* p1, Piste* p2, Piste* p3);
	Piste taulukonOsoite(int);
	~Kolmio();
private:
	Piste *pisteet[3];
};

#endif