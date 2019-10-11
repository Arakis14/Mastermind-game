#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"
#include "Pins.hpp"
#include "Combinations.hpp"
#include <ctime>

void GetRandomPins(Pins & pins)
{
    int random {};
   
    for (auto i = 0; i < 4; i++)
    {
        random = rand() % 4;
        pins.AddPin(testCombination1.at(random));
    }
}

int main ()
{
    srand(time(NULL));
    Game g;
    Pins pins;
    GetRandomPins(pins);
    pins.PrintPins();
    return 0;
}