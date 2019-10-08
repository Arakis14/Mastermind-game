#pragma once

class Game
{
private:
int chances_ {10};
public:
    Game() = default;
    int GetChances() {return chances_;}
    void SetChances(int chances) {chances_ = chances}
    int PrintIntroduction();
};