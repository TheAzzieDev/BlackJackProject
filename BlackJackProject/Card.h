#pragma once

#ifndef CARDINCLUDED
#define CARDINCLUDED
#include <string>
#include <iostream>
#include "SuitEnum.h"



struct Card {
	SuitEnum suit;
	ValueEnum value;
	bool faceUp;
	int getValue() const;
	std::string getString() const;
	Card(SuitEnum suit = Diamonds, ValueEnum value = A);
};
#endif