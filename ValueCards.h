#pragma once
#include "Cards.h"

class ValueCards : public Cards {
public:
	ValueCards(int in_value, char in_suit);
	void setValue(int input);
	void setSuit(char input);
	string getCard();
private:
	int value;
	char suit;
};