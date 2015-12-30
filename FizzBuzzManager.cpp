#include "FizzBuzzManager.h"

FizzBuzzManager::FizzBuzzManager()
{
	fizz = new std::string[4]{"","Fizz\n","Buzz\n","FizzBuzz\n"};
}

FizzBuzzManager::~FizzBuzzManager()
{
	delete[] fizz;
}


std::string FizzBuzzManager::getMessage(int num) const
{
	int index=0;
	index += Divisibility::isDivisibleBy3(num);
	index += Divisibility::isDivisibleBy5(num) * 2;
	return fizz[index];
}