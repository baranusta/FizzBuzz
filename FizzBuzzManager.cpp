#include "FizzBuzzManager.h"

FizzBuzzManager::FizzBuzzManager()
{
	outputs = new std::string[4];
	outputs[0] = "Fizz";
	outputs[1] = "Buzz";
	outputs[2] = "";
	outputs[3] = "";
}

FizzBuzzManager::~FizzBuzzManager()
{
	delete[] outputs;
}


std::string FizzBuzzManager::getMessage(int num) const
{
	int index = Divisibility::isDivisibleBy3(num);
	std::string wow = outputs[index];
	return wow;
}