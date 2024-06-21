#include "Players.h"


void Players::SetHand(Cards* card) {
	hand.push_back(card);
}

void Players::showHand() {
	std::cout << "Test!" << std::endl;
	for (auto i : hand)
		std::cout << i->getCard() << std::endl;
}