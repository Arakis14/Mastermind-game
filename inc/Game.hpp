#pragma once
#include "Pin.hpp"
#include "Pins.hpp"
#include <vector>


class Game
{
protected:
int chances_{};
bool GameOver_{};
Pins PinsToSolve {};
Pins PlayerPins{};
std::vector<bool> PinsMatch {false, false, false, false};
std::vector<bool> PlayerMatch {false, false, false, false};

public:
    Game() = default;
    int GetChances_() {return chances_;}
    void SetChances_(int chances) {chances_ = chances;}
    bool GetGameOver_() {return GameOver_;}
    void SetGameOver_(bool GameOver) {GameOver_ = GameOver;}
    int PrintIntroduction();
    bool Play();
    Pins PlayerInput();
    Pin CharToPin(char & character);
    void SetUpGame();
    void GameOver();
    void GameWon();
    int FindWhitePins();
    int FindBlackPins();
};