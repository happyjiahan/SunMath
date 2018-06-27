//
// Created by jiahan on 23/06/2018.
//
#include "catch.hpp"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
REQUIRE( Factorial(1) == 1 );
REQUIRE( Factorial(2) == 2 );
REQUIRE( Factorial(3) == 6 );
REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "c1", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
}

TEST_CASE( "c2", "[factorial]" ) {
REQUIRE( Factorial(1) == 2 );
}


