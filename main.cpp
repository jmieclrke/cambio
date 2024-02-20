#define _CRT_SERCURE_NO_WARNINGS
#include "Deck.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	string userCommand;
	vector <string> parameters;

	cout << "Welcome to Cambio!" << endl;
	cout << "[help] - Instructions on how to play Cambio" << endl;
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
			cout << "Red King : 1 Point" << endl;
			cout << "Other Kings : 10 Points" << endl;
		}
		else if(command.compare("play") == 0){
			//create deck
			Deck deck = Deck();
			//shuffle deck.
			//deal four card to each player.
			//display cards.
			//loops turns until cambio is typed.
		}
		parameters.clear();
	}
	cout << "Press any key to quit...";
	getchar();

}