#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"
#include "Pins.hpp"
#include "Combinations.hpp"


int main ()
{
    Game g;
    Pins pins;
    for (auto const ele : testCombination1)
    {
        pins.AddPin(ele);
    }
    pins.PrintPins();
    return 0;
}