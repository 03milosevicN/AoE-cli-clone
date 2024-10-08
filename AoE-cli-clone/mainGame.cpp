#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>


#include "mainGame.h"
#include "teutons.h"

#define SLEEP std::this_thread::sleep_for(std::chrono::seconds(1))

std::string options = R"""(
	1. Teutons (Germans) 
	2. Franks
	3. Britons
	4. Italians
)""";

//experimental map generation
void generateMap(char map[12][12])
{

	srand(time(0));
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{	

			int x = rand() % 5;

			if (x == 0)
			{
				map[i][j] = 'W'; //wood
			}
			else if (x == 1)
			{
				map[i][j] = 'G'; //gold
			}
			else if (x == 2)
			{
				map[i][j] = 'S'; //stone
			}
			else if (x == 3)
			{
				map[i][j] = 'F'; //food
			}
			else
			{
				map[i][j] = '-';
			}

			if (map[i][j] == 'W')
			{
				std::cout << "\u001b[32m";
			}
			else if (map[i][j] == 'G')
			{
				std::cout << "\u001b[33m";
			}
			else if (map[i][j] == 'S')
			{
				std::cout << "\u001b[37m";
			}
			else if (map[i][j] == 'F')
			{
				std::cout << "\u001b[34m";
			}
			else
			{
				std::cout << map[i][j];
			}
			std::cout << map[i][j];
		}
		std::cout << "\u001b[37m\n";
	}
}
//experimental map generation


void startGame()
{
	char map[12][12];

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
		std::cout << '\n';
		generateMap(map);

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