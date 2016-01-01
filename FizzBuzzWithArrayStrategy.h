#pragma once
#include <string>
#include "FizzBuzzStrategy.h"

class FizzBuzzWithArrayStrategy: public FizzBuzzStrategy
{
public:
	FizzBuzzWithArrayStrategy();
	~FizzBuzzWithArrayStrategy() override;
	std::string* getString(long long num) override;

	std::string* getAllFizzBuzzText(long long round) override;
}; 
