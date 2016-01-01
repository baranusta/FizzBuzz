#define CATCH_CONFIG_RUNNER
#include "Catch/Catch.h"
#include "FizzBuzzManager.h"
#include "FizzBuzzWithArrayStrategy.h";

#include <time.h>

#define RUNTEST false

void RunFizzBuzz(FizzBuzzManager& man, long long round, std::ostream& stream)
{
	time_t start, end;
	time(&start);
	man.runFizzBuzz(round, stream);
	time(&end);
	double dif = difftime(end, start);
	printf("Elapsed time is %.4lf seconds.\n", dif);
}

int main()
{
	if (RUNTEST)
	{
		int result = Catch::Session().run();
		return result;
	}
	else
	{
		std::ofstream file1("yo1.txt");
		std::ofstream file2("yo2.txt");
		FizzBuzzManager defManager;
		RunFizzBuzz(defManager,10000000,file1);
		FizzBuzzManager myManager(new FizzBuzzWithArrayStrategy());
		RunFizzBuzz(myManager, 10000000, file2);
		file1.close();
		file2.close();
	}

	return 0;
}