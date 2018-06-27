//
// Created by jiahan on 27/06/2018.
//


#include <countof.hpp>
#include "catch.hpp"

USING_NS(SunMath)

TEST_CASE("array", "[countof]")
{
    int array1[10];
    REQUIRE(10 == countof(array1));

    int array2[1];
    REQUIRE(1 == countof(array2));

    float array3[10][20];
    REQUIRE(10 * 20 == countof(array3));
}

