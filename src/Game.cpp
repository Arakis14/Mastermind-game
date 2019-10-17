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

void Game::SetUpGame()
{
    SetGameOver_(false);
    SetChances_(10);
    PinsToSolve.GetRandomPins();
}
bool Game::Play()
{
    while(GameOver_ != true)
    {
        PinsToSolve.PrintPins(); // debugg
        auto PlayerResult = PlayerInput();
        if (chances_ == 0)
            GameOver();
        else if (PlayerResult == PinsToSolve)
            GameWon();
        else 
            {
                --chances_;
                std::cout << "Wrong, you have " << GetChances_() << " left.\n";
            }
    }
    return true;
}

Pins Game::PlayerInput()
{
    
    std::cout << "Enter your guess: \n";
    char a,b,c,d;
    std::cin >> a >> b >> c >> d;
    auto PinA = CharToPin(a);
    auto PinB = CharToPin(b);
    auto PinC = CharToPin(c);
    auto PinD = CharToPin(d);
    PlayerPins.AddPin(PinA);
    PlayerPins.AddPin(PinB);
    PlayerPins.AddPin(PinC);
    PlayerPins.AddPin(PinD);
    return PlayerPins;  
}

Pin Game::CharToPin(char & character)
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

void Game::GameOver()
{
    std::cout << "Sorry, you ran out of chances. GameOver :(\n";
    SetGameOver_(true);
}

void Game::GameWon()
{
    std::cout << "You got the right answer! You won :)\n";
    SetGameOver_(true);
}