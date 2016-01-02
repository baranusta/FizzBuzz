#include "FizzBuzzWithArrayStrategy.h"

FizzBuzzWithArrayStrategy::FizzBuzzWithArrayStrategy()
{
	fizzBuzzArr = new std::string[15]{
	"FizzBuzz\n",
	"",
	"",
	"Fizz\n",
	"",
	"Buzz\n",
	"Fizz\n",
	"",
	"",
	"Fizz\n",
	"Buzz\n",
	"",
	"Fizz\n",
	"",
	""
	};
}

FizzBuzzWithArrayStrategy::~FizzBuzzWithArrayStrategy()
{
	delete[] fizzBuzzArr;
}

inline std::string* FizzBuzzWithArrayStrategy::getString(long long num)
{
	return &fizzBuzzArr[num];
}

inline std::string* FizzBuzzWithArrayStrategy::getAllFizzBuzzText(long long round)
{
	std::string* text = new std::string();;
	auto remaining = round;
	while (remaining>=15)
	{
		for (int i = 0; i < 15; i++)
		{
			*text += *getString(i);
		}
		remaining -= 15;
	}
	for (auto i = 0; i <= remaining; i++)
	{
		*text += *getString(i);
	}
	return text;
}
