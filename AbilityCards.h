#pragma once
#include "Cards.h"

//Ability cards function much the same as value cards but come with
//an ability value that coresponds to what that card can do.
// 78 - Look at your own card
// 910 - look at opponents card
// 1112 - blind swap card
// 13 - look and swap

class AbilityCards : public Cards {
public:
	AbilityCards(int in_value, char in_suit, int ability);
	void setValue(int input);
	void setSuit(char input);
	void setAbility(int input);
	string getCard();
	int getAbility();
private:
	int value;
	char suit;
	int ability;
};