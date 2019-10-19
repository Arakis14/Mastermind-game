#include "Game.hpp"
#include <iostream>

int Game::PrintIntroduction()
{
    std::cout << "******************************\n";
    std::cout << "Welcome into the Mastermind!\n";
    std::cout << "\n";
    std::cout << "Play the game by typing pins' colours in the terminal.\n";
    std::cout << "R - red, G - green, B - blue, Y - yellow , P - purple, O - orange...\n";
    std::cout << "\n";
    std::cout << "If you guess wrong I'll help by supporting you with informatons about black & white pins.\n";
    std::cout << "Black pins indicate how many pins are on the same color and position as in the hidden combination.\n";
    std::cout << "White pins indicate how many pins are present in combination but are in different position.\n";
    std::cout << "Have fun!\n";
    std::cout << "******************************\n";
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
    PrintIntroduction();
    while(GameOver_ != true)
    {
        int BlackPins{};
        int WhitePins{};
        std::cout << "\nHidden Pins:";
        // PinsToSolve.PrintPins(); // debugg
        std::cout << "\n";
        auto PlayerResult = PlayerInput();
        if (chances_ == 0)
            GameOver();
        else if (PlayerResult == PinsToSolve)
            GameWon();
        else 
            {
                --chances_;
                std::cout << "Wrong, you have " << GetChances_() << " chances left.\n";
                BlackPins = FindBlackPins();
                std::cout << "Number of black pins: " << BlackPins << "\n";
                WhitePins = FindWhitePins();
                std::cout << "Number of white pins: " << WhitePins << "\n";
                std::cout << "\n";
            }
    }
    return true;
}

Pins Game::PlayerInput()
{
    PlayerPins.DeletePins();
    std::cout << "\nEnter your guess: \n";
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
    if (toupper(character) != 'G' && 
        toupper(character) != 'B' &&  
        toupper(character) != 'R' &&
        toupper(character) != 'Y' &&
        toupper(character) != 'P' &&
        toupper(character) != 'O')
    std::cerr << "No such coloru as: " << character << "\n";
    
    if (toupper(character) == 'G')
        return Pin::Color::GREEN;
    else if (toupper(character) == 'B')
        return Pin::Color::BLUE;
    else if (toupper(character) == 'R')
        return Pin::Color::RED;
    else if (toupper(character) == 'Y')
        return Pin::Color::YELLOW;
    else if (toupper(character) == 'P')
        return Pin::Color::PURPLE;
    else if (toupper(character) == 'O')
        return Pin::Color::ORANGE;
}

void Game::GameOver()
{
    std::cout << "Sorry, you ran out of chances. GameOver :(\n";
    std::cout << "The combination was: ";
    PinsToSolve.PrintPins();
    SetGameOver_(true);
}

void Game::GameWon()
{
    std::cout << "You got the right answer! You won :)\n";
    SetGameOver_(true);
}

int Game::FindWhitePins()
{
    int WhitePins{0};
    for (auto i = 0; i < 4; ++i)
    {
        if (PlayerMatch.at(i))
                continue;
        for (auto j = 0; j < 4; j++)
        {
            if (i == j || PinsMatch.at(j))
                continue;
            if (PlayerPins[i] == PinsToSolve[j])
            {
                PinsMatch.at(j) = true;
                WhitePins++;
                break;
            }
        }
    }
    PlayerMatch.clear();
    PinsMatch.clear();
    PlayerMatch.assign(4, false);
    PinsMatch.assign(4, false);
    return WhitePins;
}

int Game::FindBlackPins()
{
    int BlackPins{0};
    for (auto i = 0; i < 4; ++i)
    {
        if(PlayerPins[i] == PinsToSolve[i])
        {
            BlackPins++;
            PlayerMatch.at(i) = true;
            PinsMatch.at(i) = true;
        }
    }
    return BlackPins;
}