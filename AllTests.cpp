#include "Catch/Catch.h"
#include "Divisibility.h"
#include "FizzBuzzManager.h"
#include "FizzBuzzWithArrayStrategy.h"

TEST_CASE("DivisibilityTest", "[tv]") {
	REQUIRE(Divisibility::isDivisibleBy3(9));
	REQUIRE(!Divisibility::isDivisibleBy3(8));
	REQUIRE(Divisibility::isDivisibleBy5(10));
	REQUIRE(!Divisibility::isDivisibleBy5(9));
}

#define RUNFORSTRATEGIES {

TEST_CASE("FizzBuzzStrategiesTests", "[tv]") {
	SECTION("FizzBuzzWithModuloStrategy Tests")
	{
		FizzBuzzWithModuloStrategy strategy;
		REQUIRE(*strategy.getString(8) == "");
		REQUIRE(*strategy.getString(3) == "Fizz\n");
		REQUIRE(*strategy.getString(5) == "Buzz\n");
		REQUIRE(*strategy.getString(15) == "FizzBuzz\n");
		REQUIRE(*strategy.getAllFizzBuzzText(5) == "FizzBuzz\nFizz\nBuzz\n");
		REQUIRE(*strategy.getAllFizzBuzzText(18) == "FizzBuzz\nFizz\nBuzz\nFizz\nFizz\nBuzz\nFizz\nFizzBuzz\nFizz\n");
	}
	SECTION("FizzBuzzWithArray Tests")
	{
		FizzBuzzWithArrayStrategy strategy;
		REQUIRE(*strategy.getString(8) == "");
		REQUIRE(*strategy.getString(3) == "Fizz\n");
		REQUIRE(*strategy.getString(5) == "Buzz\n");
		REQUIRE(*strategy.getString(0) == "FizzBuzz\n");
		REQUIRE(*strategy.getAllFizzBuzzText(5) == "FizzBuzz\nFizz\nBuzz\n");
		REQUIRE(*strategy.getAllFizzBuzzText(18) == "FizzBuzz\nFizz\nBuzz\nFizz\nFizz\nBuzz\nFizz\nFizzBuzz\nFizz\n");
	}
}


TEST_CASE("FizzBuzzManager", "[tv]") {
	SECTION("Constructor Tests")
	{
		SECTION("Default Constructor Test")
		{
			FizzBuzzManager myManager;
			REQUIRE(dynamic_cast<FizzBuzzWithModuloStrategy*>(myManager.getStrategy()) != 0);
		}
		SECTION("WithStrategy Constructor Test")
		{
			FizzBuzzManager myManager(new FizzBuzzWithArrayStrategy());
			REQUIRE(dynamic_cast<FizzBuzzWithArrayStrategy*>(myManager.getStrategy()) != 0);
		}
	}
	
}