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
