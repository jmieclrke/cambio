#pragma once
#include "Cards.h"
#include <iostream>
#include <random>
#include <algorithm>

class Deck {
public:
	Deck();//Creates the deck of 52 cards. Uses Cards.h to create individual cards and adds them to DeckOfCards.
	//Creates 52 items, AH (ace of hearts), 2H (two of hearts), S, D, C (spades, diamonds, clubs)
	void ShuffleDeck();//Shuffles the DeckOfCards randomly.

private:
	vector <Cards*> DeckOfCards;
};