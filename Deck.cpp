#include "Deck.h"
#include "ValueCards.h"
#include "AbilityCards.h"

Deck::Deck() {
	int numOfCards = 0, cardValue = 1, abilityVal = 0;
	char cardSuit = 'H';

	while (numOfCards < 52) {
		cout << cardValue << " " << cardSuit << endl;
		Cards* newCard = nullptr;
		if (cardValue <= 6) {
			newCard = new ValueCards(cardValue, cardSuit);
		}
		else if (cardValue == 7 || cardValue == 8) {
			abilityVal = 78;
			newCard = new AbilityCards(cardValue, cardSuit, abilityVal);
		}
		else if (cardValue == 9 || cardValue == 10) {
			abilityVal = 910;
			newCard = new AbilityCards(cardValue, cardSuit, abilityVal);
		}
		else if (cardValue == 11 || cardValue == 12) {
			abilityVal = 1112;
			newCard = new AbilityCards(cardValue, cardSuit, abilityVal);
		}
		else if (cardValue == 13 && (cardSuit == 'H' || cardSuit == 'D')) {
			newCard = new ValueCards(cardValue, cardSuit);
		}
		else if (cardValue == 13 && (cardSuit == 'C' || cardSuit == 'S')) {
			abilityVal = 13;
			newCard = new ValueCards(cardValue, cardSuit);
		}
		else {
			std::cout << "There has been an error!" << std::endl;
		}

		if (newCard != nullptr) {
			DeckOfCards.push_back(newCard);
		}

		cardValue++;
		if (cardValue == 14 && cardSuit == 'H') {
			cardValue = 1;
			cardSuit = 'D';
		}
		else if (cardValue == 14 && cardSuit == 'D') {
			cardValue = 1;
			cardSuit = 'C';
		}
		else if (cardValue == 14 && cardSuit == 'C') {
			cardValue = 1;
			cardSuit = 'S';
		}

		numOfCards++;

	}
	std::cout << "Unshuffled\n";
	for (auto i : DeckOfCards)
		std::cout << i->getCard() << std::endl;
}
	
	

void Deck::ShuffleDeck() {
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(DeckOfCards), std::end(DeckOfCards), rng);
	for (auto i : DeckOfCards)
		std::cout << i->getCard() << std::endl;
}