#ifndef _DIVISIBILITY_H_
#define _DIVISIBILITY_H_

class Divisibility
{
public:
	static bool isDivisibleBy3(int num);
	static bool isDivisibleBy5(int num);
};

inline bool Divisibility::isDivisibleBy3(int num)
{
	return num % 3 == 0;
}

inline bool Divisibility::isDivisibleBy5(int num)
{
	return num % 5 == 0;
}

#endif
