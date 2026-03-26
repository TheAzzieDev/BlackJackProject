#pragma once

#include <string>
#include <iostream>
#include "Card.h"

const int DECKSIZE = 52;

class Deck {
private:
	int seed = 0;
	int currentIndex;
	Card cards[DECKSIZE];

public:
	Deck();
	Card* getCard(int index);
	Card* takeCard();
	void shuffleDeck();
};
