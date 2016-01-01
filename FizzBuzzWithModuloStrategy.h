#pragma once
#include "FizzBuzzStrategy.h"
#include "Divisibility.h"

class FizzBuzzWithModuloStrategy: public FizzBuzzStrategy
{
public:
	FizzBuzzWithModuloStrategy();
	~FizzBuzzWithModuloStrategy() override;
	std::string* getAllFizzBuzzText(long long round) override;
	std::string* getString(long long num) override;
};
