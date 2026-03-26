#pragma once
#include "Opponent.h"
#include "Opponent.h"

class Game {
private:
	Deck deck;
	Opponent player;
	Opponent dealer;
public:
	Game();
	void printHands();
	void runGame();
};