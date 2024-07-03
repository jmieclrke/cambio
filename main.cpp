#define _CRT_SERCURE_NO_WARNINGS
#include "Deck.h"
#include "Human.h"
#include "CPU.h"


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	string userCommand;
	vector <string> parameters;
	Cards* temp = 0;

	cout << "Welcome to Cambio!" << endl;
	cout << "[help] - Instructions on how to play Cambio" << endl;
	cout << "[play] - Start the game" << endl;
	cout << "[exit] - Exit program" << endl;
	while (userCommand != "exit") {


		getline(cin, userCommand);
		char* cstr = new char[userCommand.length() + 1];
		strcpy(cstr, userCommand.c_str());

		char* token;
		token = strtok(cstr, " ");

		while (token != NULL) {
			parameters.push_back(token);
			token = strtok(NULL, " ");
		}
		string command = parameters[0];

		if (command.compare("help") == 0) {
			cout << "+---------------+" << endl;
			cout << "|      Help     |" << endl;
			cout << "+---------------+" << endl;
			cout << "Joker: 0 Points" << endl;
			cout << "Ace : 1 Point" << endl;
			cout << "Numbers 2 to 6 : Face Value" << endl;
			cout << "7 and 8 : Take a look at one card from your hand" << endl;
			cout << "9 and 10 : Take a look at one card from any opponent’s hand" << endl;
			cout << "Jack : Blindly swap a card from your hand with one of your opponents" << endl;
			cout << "Queen : Swap a card with an opponent after looking at both cards" << endl;
			cout << "Red Kings : -1 Point" << endl;
			cout << "Black Kings : Look at a card and swap" << endl;
		}
		else if(command.compare("play") == 0){
			//create deck
			Deck deck = Deck();
			Human human;
			CPU cpu;
			std::cout << "##############\n";
			std::cout << "Shuffled Deck:" << std::endl;
			deck.ShuffleDeck();
			
			//Deals out 4 cards to the user and then displays them.
			int i = 0;
			while (i < 4) {
				temp = deck.takeCard();
				human.SetHand(temp);
				temp = deck.takeCard();
				cpu.SetHand(temp);
				i++;
			}
			std::cout << "Human hand: \n";
			human.showHand(); //Shows the user their hand so they can memorise the cards they have.
			system("pause"); //Pauses the game and waits for an input to continue.
			cout << "\033[2J\033[1;1H"; //Clears the screen.

			//For testing to show that the CPU recieves a hand.
			std::cout << "CPU hand: \n";
			cpu.showHand();

			//The game of cambio starts. 
			std::string choice = "empty"; //Used to initialise the variable
			while (choice != "cambio") { //The game will continue until cambio is typed by the player.
				//draw card or call cambio
				//swap card in hand or use ability
				//change to cpu turn
				std::cout << "[draw] or [cambio]\n";
				std::cin >> choice;
				if (choice == "draw") {
					temp = deck.takeCard();
					human.drawCard(temp);
				}
				std::cout << "[keep], [discard], or [use ability]\n";
				//IM HERE=========================

			}

					

			//deal four cards to cpu (cpu.deal()).
			//deal four cards to player (player1.deal()).
			//display cards.
			//loops turns until cambio is typed.
		}
		else if (command.compare("exit") == 0) {
			return(0);
		}
		parameters.clear();
	}
	cout << "Press any key to quit...";
	getchar();

}