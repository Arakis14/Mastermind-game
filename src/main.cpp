#include <iostream>
#include "Game.hpp"
#include "Pin.hpp"
#include "Pins.hpp"


int main ()
{
    srand(time(NULL));
    Game game;
    game.SetUpGame();
    game.Play();

    return 0;
}