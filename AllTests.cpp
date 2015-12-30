#include "Catch/Catch.h"
#include "Divisibility.h"
#include "FizzBuzzManager.h"

TEST_CASE("DivisibilityTest", "[tv]") {
	REQUIRE(Divisibility::isDivisibleBy3(9));
	REQUIRE(!Divisibility::isDivisibleBy3(8));
	REQUIRE(Divisibility::isDivisibleBy5(10));
	REQUIRE(!Divisibility::isDivisibleBy5(9));
	REQUIRE(Divisibility::isDivisibleBy15(15));
	REQUIRE(!Divisibility::isDivisibleBy15(9));
}

TEST_CASE("FizzBuzzManager", "[tv]") {
	FizzBuzzManager myManager;
	REQUIRE(myManager.getMessage(3) == "Fizz\n");
	REQUIRE(myManager.getMessage(8) == "");
	REQUIRE(myManager.getMessage(5) == "Buzz\n");
	REQUIRE(myManager.getMessage(4) == "");
	REQUIRE(myManager.getMessage(15) == "FizzBuzz\n");
	REQUIRE(myManager.getMessage(1) == "");
}