#include"KaupunginHotelli.h"
#include"KetjuHotelli.h"
#include<iostream>
#include<string>
using namespace std;

int main(void){

	KetjuHotelli *ht = new KetjuHotelli();
	// ja antamalla arvot esim:
	ht->setTiedot(0.8, 80, "JyväsHovi");

	ht->isKavelymatka();
	ht->getHuoneHinta();

	delete ht;

}