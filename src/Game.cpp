#include "Game.hpp"
#include <iostream>

int Game::PrintIntroduction()
{
    std::cout << "Welcome into the Mastermind!\n";
    std::cout << "\n";
    std::cout << "Play the game by typing pins' colours in the terminal.\n";
    std::cout << "R - red, G - green, B - blue, Y - yellow ...";
    return 15;
}
