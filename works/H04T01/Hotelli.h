#ifndef HOTELLIH
#define HOTELLIH
#include<string>
#include<iostream>
using namespace std;

class Hotelli {

public:

	Hotelli();
	~Hotelli();

	virtual bool isKavelymatka() = 0;

	void setHuoneita(int num);
	int getHuoneita();
	void setKuvaus(string k);
	string getKuvaus();

protected:

	int huoneita;
	string kuvaus;

};
#endif

