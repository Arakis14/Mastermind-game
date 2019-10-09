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

    Pin testpinx(Pin::Color::BLUE);
    Pin testpiny(Pin::Color::GREEN);

    Pins test;
    test.AddPin(testpinx);
    test.AddPin(testpiny);
    test.PrintPins();

    auto result = test==collection;
    std::cout << result;
    return 0;
}