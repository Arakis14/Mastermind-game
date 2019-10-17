#include <gtest/gtest.h>
#include "Game.hpp"

TEST(MastermindTest, CanConstructGame)
{
    //GIVEN
    Game g;
}

TEST(MastermindTest, CanPrintIntroduction)
{
    //GIVEN
    Game g;

    //WHEN
    auto result = g.PrintIntroduction();
    
    //THEN
    ASSERT_EQ(result,15);
}

// TEST(MastermindTest, CanGamePlay)
// {
//     //GIVEN
//     Game g;
//     //WHEN
//     auto result = g.Play();
//     //THEN
//     ASSERT_TRUE(result);
// }
TEST(MastermindTest, GameWonTest)
{
    Game g;
    g.GameWon();
    auto result = g.GetGameOver_();
    ASSERT_TRUE(result);
}

TEST(MastermindTest, GameOverTest)
{
    Game g;
    g.GameOver();
    auto result = g.GetGameOver_();
    ASSERT_TRUE(result);
}
