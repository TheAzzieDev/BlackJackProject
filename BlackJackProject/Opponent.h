#pragma once
#include "Deck.h"
#include <string>
class Opponent {
private:
	Card hand[5];
public:
	int cardCount;
	int handValue;
	bool bust;
	std::string ShowHand();
	int tallyScore();
	void hit(Card card);
	void turnCard(int index);
	void reset();
	Opponent();
};