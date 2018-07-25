//
// Created by jiahan on 23/06/2018.
//

#include "catch.hpp"
#include <CommonMacro.h>
#include <iostream>
#include <selfaware.hpp>
#include "../include/Vec2.hpp"

USING_NS(SunMath)

TEST_CASE( "Vec2i.v()", "[Vec2]" )
{
    Vec2i v;
    REQUIRE(v.x == 0);
    REQUIRE(v.y == 0);
}

TEST_CASE("Vec2i.v(2,4)", "[Vec2]")
{
    Vec2i v(2, 4);
    REQUIRE(v.x == 2);
    REQUIRE(v.y == 4);
}


TEST_CASE("Vec2f.v(2.1, 4.1)", "[Vec2]")
{
    Vec2f v(2.1, 4.1);
    REQUIRE(v.x == Approx(2.1));
    REQUIRE(v.y == Approx(4.1));
}


TEST_CASE("Vec2f.v(-2.00001, 4.00001)", "[Vec2]")
{
    Vec2f v(-2.00001, 4.00001);
    REQUIRE(v.x == Approx(-2.00001));
    REQUIRE(v.y == Approx(4.00001));
}

TEST_CASE("Vec2i.copy_construct", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2(v1);

    REQUIRE(v2.x == v1.x);
    REQUIRE(v2.y == v1.y);
}


TEST_CASE("Vec2i.operator=", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2 = v1;

    REQUIRE(v2.x == v1.x);
    REQUIRE(v2.y == v1.y);
}


TEST_CASE("Vec2i.operator+", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2(1, 2);

    Vec2i result = v1 + v2;

    REQUIRE(result.x == 3);
    REQUIRE(result.y == 6);
}


TEST_CASE("Vec2i.operator-", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2(1, 2);

    Vec2i result = v1 - v2;

    REQUIRE(result.x == 1);
    REQUIRE(result.y == 2);
}


TEST_CASE("Vec2i.operator-=", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2(1, 2);

    v1 -= v2;

    REQUIRE(v1.x == 1);
    REQUIRE(v1.y == 2);
    REQUIRE(v2.x == 1);
    REQUIRE(v2.y == 2);
}


TEST_CASE("Vec2i.operator+=", "[Vec2]")
{
    Vec2i v1(2, 4);
    Vec2i v2(1, 2);

    v1 += v2;

    REQUIRE(v1.x == 3);
    REQUIRE(v1.y == 6);
    REQUIRE(v2.x == 1);
    REQUIRE(v2.y == 2);
}

TEST_CASE("Vec2i.Struct", "[Vec2]")
{

}
