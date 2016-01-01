#pragma once
#include <string>
#include <iostream>

class FizzBuzzStrategy
{
public:
	virtual ~FizzBuzzStrategy() {};
	virtual std::string* getAllFizzBuzzText(long long round) = 0;
protected:
	virtual std::string* getString(long long num) = 0;
	std::string* fizzBuzzArr;
};
