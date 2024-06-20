#include "ValueCards.h"

ValueCards::ValueCards(int in_value, char in_suit) {
	setValue(in_value);
	setSuit(in_suit);
}

void ValueCards::setValue(int input){
	value = input;
}

void ValueCards::setSuit(char input) {
	suit = input;
}

std::string ValueCards::getCard() {
	std::stringstream ss;
	ss << value << " " << suit;
	return ss.str();
}