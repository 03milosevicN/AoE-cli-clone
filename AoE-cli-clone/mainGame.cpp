#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "mainGame.h"
#include "teutons.h"

#define SLEEP std::this_thread::sleep_for(std::chrono::seconds(1))

std::string options = R"""(
	1. Teutons (Germans) 
	2. Franks
	3. Britons
	4. Italians
)""";

void startGame()
{

	int option;

	std::cout << "The game will now begin! \n";

	SLEEP;

	std::cout << "Choose your civilization: \n";
	std::cout << options << '\n';

	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "You chose Teutons!" << '\n';
		std::cout << "***ADD TEUTONS SOUND HERE***" << '\n';
		SLEEP;
		teutons();
		break;
	case 2:
		std::cout << "You chose Franks!" << '\n';
		std::cout << "***ADD FRANKS SOUND HERE***" << '\n';
		break;

	case 3:
		std::cout << "You chose Britons!" << '\n';
		std::cout << "***ADD BRITONS SOUND HERE***" << '\n';
		break;

	case 4:
		std::cout << "You chose Italians!" << '\n';
		std::cout << "***ADD ITALIANS SOUND HERE***" << '\n';
		break;
	default:
		std::cout << "Invalid option." << '\n';
		break;
	}


}