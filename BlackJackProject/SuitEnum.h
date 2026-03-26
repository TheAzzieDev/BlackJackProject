#pragma once
#include <unordered_map>
#include <string>



#ifndef INCLUDED
#define INCLUDED

enum SuitEnum { Hearts, clover, Spades, Diamonds };
enum ValueEnum { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, J, Q, K, A };

#endif



extern int SUITCOUNT;
extern int VALUECOUNT;
extern std::unordered_map<ValueEnum, int> valuesDict;

extern std::unordered_map<ValueEnum, std::string> valuesDictString;


extern std::unordered_map<SuitEnum, std::string> suitDictString;




