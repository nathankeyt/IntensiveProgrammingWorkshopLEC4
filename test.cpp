#define CATCH_CONFIG_MAIN

#include "./catch.hpp"
#include "./functions_to_implement.cpp"

TEST_CASE("Sums are computed", "[sum]")
{
    REQUIRE(Sum({1, 2, 9}) == 12);
    REQUIRE(Sum({1, 2}) == 3);
    REQUIRE(Sum({1, 9}) == 12);
    REQUIRE(Sum({1, 4, 5}) == 10);
}