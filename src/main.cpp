#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"
#include "Pins.hpp"


int main ()
{
    Game g;
    // g.PrintIntroduction();

    Pin testpin(Pin::Color::BLUE);
    testpin.SetColor(Pin::Color::RED);

    return 0;
}