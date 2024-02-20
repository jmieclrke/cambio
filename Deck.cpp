#include "Deck.h"
#include "ValueCards.h"

Deck::Deck() {
	int numOfCards = 0, cardValue=1;
	char cardSuit = 'H';

	while (numOfCards < 52) {
		cout << cardValue << " " << cardSuit << endl;
		//Cards* newCard = nullptr;
		if (cardValue <= 6) {
			//newCard = new ValueCards(cardValue, cardSuit);
		}
		else if (cardValue == 7 || cardValue == 8) {
			//create look at own cards
		}
		else if (cardValue == 9 || cardValue == 10) {
			//create look at opponent cards
		}
		else if (cardValue == 11 || cardValue == 12) {
			//create blind swap
		}
		else if (cardValue == 13 && (cardSuit == 'H' || cardSuit == 'D')) {
			//create red king
		}
		else {
			//create black king
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
	
	
}