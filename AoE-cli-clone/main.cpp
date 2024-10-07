#include <iostream>
#include "mainGame.h"


int main()
{

    int option = {};

    std::cout << "Welcome! " << '\n';
    std::cout << "Enter `1` to begin or `0` to exit. " << '\n';

    std::cin >> option;

    if (option == 1)
    {
        startGame();
    }
    else if (option == 0)
    {
        std::cout << "Goodbye. " << '\n';
    }
    else
    {
        std::cout << "Invalid option. " << '\n';
    }

    return 0;
}

