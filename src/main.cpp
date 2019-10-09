#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"
#include "Pins.hpp"


int main ()
{
    Game g;
    // g.PrintIntroduction();


    auto res = testpin.ToString();
    std::cout << res << "\n";
    // auto result = testpin == anothertestpin;
    // std::cout << result;
    Pins collection;
    collection.AddPin(testpin);
    collection.AddPin(anothertestpin);
    collection.PrintPins();


    test.PrintPins();

    auto result = test==collection;
    std::cout << result;
    return 0;
}