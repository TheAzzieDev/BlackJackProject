#include "Card.h"

int Card::getValue() const
{
    return valuesDict[this->value];
}

std::string Card::getString() const
{
    return suitDictString[this->suit] +" "+ valuesDictString[this->value];
}

Card::Card(SuitEnum suit, ValueEnum value)
    : suit(suit), value(value), faceUp(true){};