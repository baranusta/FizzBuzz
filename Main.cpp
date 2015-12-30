#define CATCH_CONFIG_RUNNER
#include "Catch/Catch.h"
#include "FizzBuzzManager.h"

#include <time.h>
#include <iostream>


#define RUNTEST true

void RunFizzBuzz(int round)
{
	FizzBuzzManager myManager;
	time_t start, end;
	time(&start);
	for (auto i = 0; i < round;i++)
	{
		std::cout<<myManager.getMessage(i);
	} 
	time(&end);
	double dif = difftime(end, start);
	printf("Elasped time is %.2lf seconds.", dif);
}

int main()
{
	if (RUNTEST)
	{
		int result = Catch::Session().run();
		return result;
	}
	else
		RunFizzBuzz(10000);

	return 0;
}