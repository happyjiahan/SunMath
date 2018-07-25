#include "catch.hpp"
#include "Vec.hpp"


TEST_CASE("GetElement", "[swizzle]") {

	Vec<2, int> v2(1, 2);
	auto &x = v2.xy.GetElement(0);
	auto &y = v2.xy.GetElement(1);

	REQUIRE(x == 1);
	REQUIRE(y == 2);
}



