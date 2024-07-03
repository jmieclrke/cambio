#include "Players.h"


void Players::SetHand(Cards* card) {
	hand.push_back(card);
}

void Players::showHand() {
	std::cout << "Test!" << std::endl;
	int order = 1;
	for (auto i : hand) {
		std::cout << order << ": ";
		std::cout << i->getCard() << std::endl;
		order++; 
	}
}

void Players::drawCard(Cards* card) {
	std::cout << card->getCard();
}