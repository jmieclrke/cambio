#include "AbilityCards.h"

AbilityCards::AbilityCards(int in_value, char in_suit, int in_ability) {
	setValue(in_value);
	setSuit(in_suit);
	setAbility(in_ability);
}

void AbilityCards::setValue(int input) {
	value = input;
}

void AbilityCards::setSuit(char input) {
	suit = input;
}

void AbilityCards::setAbility(int input) {
	ability = input;
}

std::string AbilityCards::getCard() {
	std::stringstream ss;
	ss << value << " " << suit;
	return ss.str();
}

int AbilityCards::getAbility() {
	return ability;
}