#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include "tactician.h"


using namespace std;

bool rolling = true;
Tactician* MainCharacter = nullptr;


int main(int argc, char** argv) {

	// choose your tactician
	std::cout << "Choose a Tactician: \n"
		<< "1 = Choncc        2 = Ao Shin\n"
		<< "3 = Poro          4 = Dowsie\n"
		<< "5 = Chibi Ahri    6 = Chibi Ashe\n"
		<< "7 = Chibi Gwen    8 = Chibi Teemo\n"
		<< "9 = Chibi Yone\n";
	int choice = 0;
	while (choice == 0) {
		std::cin >> choice;
		if (choice < 1 || choice > 9)
			choice = 0;
	}
	switch (choice) {
	case 1: {
		MainCharacter = new Tactician("Choncc", 0, 2, 0, 0);
	}
		  break;
	case 2: {
		MainCharacter = new Tactician("Ao Shin", 0, 2, 0, 0);
	}
		  break;
	case 3: {
		MainCharacter = new Tactician("Poro", 0, 2, 0, 0);
	}
		  break;
	case 4: {
		MainCharacter = new Tactician("Dowsie", 0, 2, 0, 0);
	}
		  break;
	case 5: {
		MainCharacter = new Tactician("Chibi Ahri", 0, 2, 0, 0);
	}
		  break;
	case 6: {
		MainCharacter = new Tactician("Chibi Ashe", 0, 2, 0, 0);
	}
		  break;
	case 7: {
		MainCharacter = new Tactician("Chibi Gwen", 0, 2, 0, 0);
	}
		  break;
	case 8: {
		MainCharacter = new Tactician("Chibi Teemo", 0, 2, 0, 0);
	}
		  break;
	case 9: {
		MainCharacter = new Tactician("Chibi Yone", 0, 2, 0, 0);
	}
		  break;
	default:
		return -12; // failed to make player character
	}
	std::cout << "Your Tactician: " << MainCharacter->get_tacticianName() << '\n';

	// displays to user what keys do what
	std::cout << "Enter l to buy xp (4 gold)" << '\n'
		<< "Enter b to reroll shop (2 gold)" << '\n'
		<< "Level: " << MainCharacter->get_level() << "  Gold Spent: " << MainCharacter->get_goldSpent() << '\n'; // displays Starting level and gold spent should be 0
	for (;;) {
		char c = getchar();

		switch (c) {
		case 'l':
			MainCharacter->LevelUp();
			std::cout << "Level: " << MainCharacter->get_level() << "  Gold Spent: " << MainCharacter->get_goldSpent() << '\n';
			break;
		case 'b':
			system("CLS");
			MainCharacter->Shop(MainCharacter->get_level());
			std::cout << "Level: " << MainCharacter->get_level() << "  Gold Spent: " << MainCharacter->get_goldSpent() << '\n';
			break;
		default:
			break;
		}
	}
	return 0;
}