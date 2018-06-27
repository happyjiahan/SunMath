//
// Created by jiahan on 23/06/2018.
//

//#include "catch.hpp"
//#include <CommonMacro.h>
//#include <iostream>
//#include <Vec2.hpp>

//USING_NS(SunMath);

//TEST_CASE( "Vec2i.v()", "[Vec2]" )
//{
//    Vec2i v;
//    REQUIRE(v.x == 0);
//    REQUIRE(v.y == 0);
//}
//
//TEST_CASE("Vec2i.v(2,4)", "[Vec2]")
//{
//    Vec2i v(2, 4);
//    REQUIRE(v.x == 2);
//    REQUIRE(v.y == 4);
//}
//
//
//TEST_CASE("Vec2f.v(2.1, 4.1)", "[Vec2]")
//{
//    Vec2f v(2.1, 4.1);
//    REQUIRE(v.x == Approx(2.1));
//    REQUIRE(v.y == Approx(4.1));
//}
//
//
//TEST_CASE("Vec2f.v(-2.00001, 4.00001)", "[Vec2]")
//{
//    Vec2f v(-2.00001, 4.00001);
//    REQUIRE(v.x == Approx(-2.00001));
//    REQUIRE(v.y == Approx(4.00001));
//}

template <typename T>
inline T const & max(T const & a, T const & b)
{
   return a < b ? b : a;
}

//TEST_CASE("c1", "[Vec2]")
void funx()
{
   int m = max(1, 2);
   double d = max(1.0, 2.0);
//   std::cout << "max=" << m << std::endl;
}


