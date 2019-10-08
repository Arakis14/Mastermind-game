#pragma once

class Game
{
private:
int chances_ {10};
bool GameOver_ {false};
public:
    Game() = default;
    int GetChances_() {return chances_;}
    void SetChances_(int chances) {chances_ = chances;}
    bool GetGameOver_() {return GameOver_;}
    void SetGameOver_(bool GameOver) {GameOver_ = GameOver;}
    int PrintIntroduction();
};