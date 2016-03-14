#include<iostream>
#include"Teksti.h"
#include "SFML\Graphics.hpp"
using namespace std;


Teksti::Teksti() {

	cout << "konstruktorissa";

}

Teksti::Teksti(sf::Font * fontti, string fonttiTyyppi, int x, int y) {

	sf::Font font = *fontti;

	if (!font.loadFromFile(fonttiTyyppi)) {
		cout << "Fontti ei lataantunut.";
	}

	sf::Text text;

	text.setPosition(x, y);

	// select the font
	text.setFont(font); // font is a sf::Font

	// set the string to display
	text.setString("Superman voitti eran!\nR = Uusi era | ESC = Lopeta");

	// set the character size
	text.setCharacterSize(24); // in pixels, not points!

	// set the color
	text.setColor(sf::Color::White);

	// set the text style
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	*fontti = font;

}