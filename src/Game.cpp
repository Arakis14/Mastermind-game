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
bool Game::Play()
{
    while(chances_ > 0)
    {
        --chances_;
    }
    return true;
}

void Game::PlayerInput()
{
    std::cout << "Enter your guess: \n";
    char a,b,c,d;
    std::cin >> a >> b >> c >> d;
}

Pin Game::CharToPins(char character)
{
    if (toupper(character) == 'G')
        return Pin::Color::GREEN;
    else if (toupper(character) == 'B')
        return Pin::Color::BLUE;
    else if (toupper(character) == 'R')
        return Pin::Color::RED;
    else if (toupper(character) == 'Y')
        return Pin::Color::YELLOW;
}