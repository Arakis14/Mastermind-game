#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"


enum class Colorr :  char
{
    RED = 'R',
    BLUE = 'B',
    GREEN = 'G',
    YELLOW = 'Y',
};
std::ostream& operator<<(std::ostream& os, Colorr c)
{
    return os << static_cast<char>(c);
}

int main ()
{
    Game g;
    // g.PrintIntroduction();
    // Pins pin(Color::BLUE);
    Colorr r = Colorr::BLUE;
    std::cout << r;
    // std::cout << pin;
    return 0;
}