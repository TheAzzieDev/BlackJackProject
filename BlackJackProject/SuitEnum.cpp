#pragma once
#include <unordered_map>
#include <string>
#include "SuitEnum.h"



int SUITCOUNT = 4;
int VALUECOUNT = 12;

std::unordered_map<ValueEnum, int> valuesDict{
	{TWO, 2},
	{THREE, 3},
	{FOUR, 4},
	{FIVE, 5},
	{SIX, 6},
	{SEVEN, 7},
	{EIGHT, 8},
	{NINE, 9},
	{J, 10},
	{Q, 10},
	{K, 10},
	{A, 11}
};

std::unordered_map<ValueEnum, std::string> valuesDictString{
	{TWO, "2"},
	{THREE, "3"},
	{FOUR, "4"},
	{FIVE, "5"},
	{SIX, "6"},
	{SEVEN, "7"},
	{EIGHT, "8"},
	{NINE, "9"},
	{J, "J"},
	{Q, "Q"},
	{K, "K"},
	{A, "A"}
};

/*

	{Hearts, "❤︎⁠"},
	{clover, "✤"},
	{Spades, "♠"},
	{Diamonds, "◆︎"}
*/

std::unordered_map<SuitEnum, std::string> suitDictString{
	{Hearts, "♥︎⁠"},
	{clover, "✤"},
	{Spades, "♠"},
	{Diamonds, "◆︎"}
};




