#ifndef PISTEH
#define PISTEH
#include<string>
using namespace std;

class Piste {

private:
	int x;
	int y;
public:
	int haeX();
	int haeY();
	Piste();
	Piste(int, int);
	~Piste();
};
#endif