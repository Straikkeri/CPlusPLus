#include"KetjuHotelli.h"
#include"KaupunginHotelli.h"
using namespace std;

KetjuHotelli::KetjuHotelli() {

	huoneHinta = 120;

	cout << "KetjuHotellin konstruktori." << endl << endl;
	

}

void KetjuHotelli::getHuoneHinta(){

	cout << endl << endl << "Huoneen hinta: " << huoneHinta << endl << endl;

}

KetjuHotelli::~KetjuHotelli() {

	cout << "KetjuHotellin dekonsturkori." << endl << endl;
}