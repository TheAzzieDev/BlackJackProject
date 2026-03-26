#include "Deck.h"
#include <random>
#include <time.h>
using namespace std;
Deck::Deck()
{
	int index = 0;
	for (int i = 0; i < SUITCOUNT; i++) {
		SuitEnum currentSuit = static_cast<SuitEnum>(i);
		for (int j = 0; j < VALUECOUNT; j++) {
			ValueEnum currentValue = static_cast<ValueEnum>(j);
			Card newCard = Card(currentSuit, currentValue);
			this->cards[index++] = newCard;
		}
	}
	this->seed = time(0);
	this->currentIndex = 0;
	shuffle(this->cards, this->cards + 52, default_random_engine(this->seed));
}

Card* Deck::getCard(int index)
{
	if (index >= DECKSIZE || index < 0)
		return nullptr;
	return &this->cards[index];
}

Card* Deck::takeCard()
{
	Card* card = this->getCard(this->currentIndex);
	if (card != nullptr)
		this->currentIndex++;
	return card;
}

void Deck::shuffleDeck()
{
	shuffle(this->cards, this->cards + 52, default_random_engine(this->seed)); 
}





