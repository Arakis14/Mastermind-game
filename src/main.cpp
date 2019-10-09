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
    testpin.SetColor(Pin::Color::YELLOW);
    Pin anothertestpin(Pin::Color::BLUE);
    auto res = testpin.ToString();
    std::cout << res << "\n";
    // auto result = testpin == anothertestpin;
    // std::cout << result;
    Pins collection;
    collection.AddPin(testpin);
    collection.AddPin(anothertestpin);
    collection.PrintPins();
    return 0;
}