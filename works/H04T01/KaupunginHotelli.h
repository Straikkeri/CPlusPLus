#ifndef KAUPUNGINHOTELLIH
#define KAUPUNGINHOTELLIH

#include"Hotelli.h"


class KaupunginHotelli : public Hotelli {

public:
	KaupunginHotelli();
	~KaupunginHotelli();
	void setTiedot(float, int, string);
	void setEtaisyys(float);
	float getEtaisyys();
	bool isKavelymatka();

private:
	float etaisyys;

};

#endif