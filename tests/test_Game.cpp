#include <gtest/gtest.h>
#include "Game.hpp"

TEST(MastermindTest, CanCreateGame)
{
    //GIVEN
    Game g;

    //WHEN

    //THEN
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
TEST(MastermindTest, IsGameOver)
{
    //GIVEN
    Game g;
    g.SetGameOver_(true);
    //WHEN
    auto result = g.GetGameOver_();
    //THEN
    ASSERT_TRUE(result);
}
TEST(MastermindTest, CanGamePlay)
{
    //GIVEN
    Game g;
    //WHEN
    auto result = g.Play();
    //THEN
    ASSERT_TRUE(result);
}
