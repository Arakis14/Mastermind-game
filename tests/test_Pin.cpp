#include <gtest/gtest.h>
#include "Pin.hpp"

struct PinTests : public ::testing::Test
{

};

TEST(PinTest, CanConstructPin)
{
    Pin p;
}

TEST(PinTest, CanToStingNegaive)
{
    //Given
    Pin p(Pin::Color::RED);
    Pin p2(Pin::Color::BLUE);
    //WHEN
    auto expected = p2.ToString();
    auto result = p.ToString();
    //THEN
    ASSERT_NE(expected,result);
}

TEST(PinTest, CanToStingPositive)
{
    //Given
    Pin p(Pin::Color::RED);
    Pin p2(Pin::Color::RED);
    //WHEN
    auto expected = p2.ToString();
    auto result = p.ToString();
    //THEN
    ASSERT_EQ(expected,result);
}

TEST(PinTest, CanEqualOperatorTrue)
{
    Pin p(Pin::Color::RED);
    Pin p2(Pin::Color::RED);
    auto result = p == p2;
    ASSERT_TRUE(result);
}
TEST(PinTest, CanEqualOperatorFalse)
{
    Pin p(Pin::Color::RED);
    Pin p2(Pin::Color::BLUE);
    auto result = p == p2;
    ASSERT_FALSE(result);
}