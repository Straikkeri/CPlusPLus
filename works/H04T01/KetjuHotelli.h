#ifndef KETJUHOTELLIH
#define KETJUHOTELLIH

#include"KaupunginHotelli.h"


class KetjuHotelli : public KaupunginHotelli {

public:
	KetjuHotelli();
	~KetjuHotelli();
	void setHuoneHinta(float);
	void getHuoneHinta();
	void setEtukortti(bool);
	bool isEtukortti();
	float getAlennusHinta();

private:
	bool etukortti;
	float huoneHinta;
	float huoneAlennus;

};

#endif