#ifndef TEKSTIH
#define TEKSTIH
#include "SFML\Graphics.hpp"
#include<iostream>
#include<string>
using namespace std; 

class Teksti : sf::Text {

public:
	Teksti();
	~Teksti();
	Teksti(sf::Font*, string, int, int);
	sf::Text text;
private:
	
};

#endif