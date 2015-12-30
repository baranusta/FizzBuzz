#ifndef _FIZZBUZZMANAGER_H_
#define _FIZZBUZZMANAGER_H_
#include <string>
#include "Divisibility.h"


class FizzBuzzManager
{
public:
	FizzBuzzManager();
	~FizzBuzzManager();
	std::string getMessage(int num) const;
private:
	std::string* fizz;
};

#endif
