#include "FizzBuzzWithModuloStrategy.h"


FizzBuzzWithModuloStrategy::FizzBuzzWithModuloStrategy()
{
	fizzBuzzArr = new std::string[4]{"", "Fizz\n", "Buzz\n", "FizzBuzz\n"};
}

FizzBuzzWithModuloStrategy::~FizzBuzzWithModuloStrategy()
{
	delete[] fizzBuzzArr;
}

inline std::string* FizzBuzzWithModuloStrategy::getAllFizzBuzzText(long long round)
{
	std::string* text = new std::string();
	for (auto i = 0; i <= round; i++)
	{
		*text += *getString(i);
	}
	return text;
}

inline std::string* FizzBuzzWithModuloStrategy::getString(long long num)
{
	int index = 0;
	index += Divisibility::isDivisibleBy3(num);
	index += Divisibility::isDivisibleBy5(num) * 2;
	return &fizzBuzzArr[index];
}
