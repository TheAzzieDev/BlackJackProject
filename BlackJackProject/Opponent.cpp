#include "Opponent.h"

std::string Opponent::ShowHand()
{
    std::string output = "";
    for (int i = 0; i < this->cardCount; i++) {
        if (this->hand[i].faceUp) {
            output += this->hand[i].getString() + "  ";
        }
        else {
            output += "***  ";
        }
    }
    return output;
}

int Opponent::tallyScore()
{
    this->handValue = 0;
    for (int i = 0; i < this->cardCount; i++) {
        if (this->hand[i].faceUp == true) {
            this->handValue += this->hand[i].getValue();
        }
    }
    return this->handValue;
}

void Opponent::hit(Card card)
{
    if (this->cardCount <= 5);
        this->hand[this->cardCount++] = card;
    this->tallyScore();
    if (this->handValue > 21)
        this->bust = true;
}

void Opponent::turnCard(int index)
{
    if (index < 5) {
        this->hand[index].faceUp = true;
    }
}

void Opponent::reset()
{
    this->cardCount = 0;
    this->handValue = 0;
    this->bust = false;
}

Opponent::Opponent()
{
    this->cardCount = 0;
    this->handValue = 0;
    this->bust = false;
}
