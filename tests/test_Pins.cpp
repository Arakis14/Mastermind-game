#include <gtest/gtest.h>
#include "Pins.hpp"

TEST(PinsTest, CanAddPin)
{
    //Given
    Pin p(Pin::Color::RED);
    Pins collection;
    collection.AddPin(p);
    //WHEN
}
TEST(PinsTest, CanComparePinsNegative)
{
    //Given
    Pin testpinx(Pin::Color::BLUE);
    Pin testpiny(Pin::Color::GREEN);
    Pins test;
    test.AddPin(testpinx);
    test.AddPin(testpiny);
    Pin testpin(Pin::Color::BLUE);
    Pin anothertestpin(Pin::Color::BLUE);
    Pins collection;
    collection.AddPin(testpin);
    collection.AddPin(anothertestpin);
    //WHEN
    auto result = collection == test;
    //THEN
    ASSERT_FALSE(result);
}
TEST(PinsTest, CanComparePinsPositive)
{
    //Given
    Pin testpinx(Pin::Color::BLUE);
    Pin testpiny(Pin::Color::BLUE);
    Pins test;
    test.AddPin(testpinx);
    test.AddPin(testpiny);
    Pin testpin(Pin::Color::BLUE);
    Pin anothertestpin(Pin::Color::BLUE);
    Pins collection;
    collection.AddPin(testpin);
    collection.AddPin(anothertestpin);
    //WHEN
    auto result = collection == test;
    //THEN
    ASSERT_TRUE(result);
}