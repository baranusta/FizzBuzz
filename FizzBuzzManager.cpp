#include "FizzBuzzManager.h"

FizzBuzzManager::FizzBuzzManager()
{
	strategy = new FizzBuzzWithModuloStrategy();
}

FizzBuzzManager::FizzBuzzManager(FizzBuzzStrategy* str)
	:strategy(str)
{
}

FizzBuzzManager::~FizzBuzzManager()
{
	delete strategy;
}

void FizzBuzzManager::runFizzBuzz(long long round, std::ostream& stream) const
{
	stream<<*strategy->getAllFizzBuzzText(round);
}

FizzBuzzStrategy* FizzBuzzManager::getStrategy() const
{
	return strategy;
}
