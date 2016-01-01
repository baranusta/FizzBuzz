#ifndef _FIZZBUZZMANAGER_H_
#define _FIZZBUZZMANAGER_H_
#include <string>
#include "FizzBuzzStrategy.h"
#include "FizzBuzzWithModuloStrategy.h"
#include <iostream>


class FizzBuzzManager
{
public:
	FizzBuzzManager();
	FizzBuzzManager(FizzBuzzStrategy* str);
	~FizzBuzzManager();
	void runFizzBuzz(long long round, std::ostream& stream) const;
	FizzBuzzStrategy* getStrategy() const;
private:
	FizzBuzzStrategy* strategy;
};

#endif
