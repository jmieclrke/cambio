#pragma once
#include <iostream>
#include <vector>
#include "Cards.h"

class Players {
public:
	void SetHand(Cards* card);
	void showHand();
	void drawCard(Cards* card);
private:
	std::vector <Cards*> hand;
};