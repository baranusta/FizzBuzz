#define CATCH_CONFIG_RUNNER
#include "Catch/Catch.h"
#include "FizzBuzzManager.h"
#include "FizzBuzzWithArrayStrategy.h";

#include <time.h>
#include <chrono>

#define RUNTEST false

void RunFizzBuzz(FizzBuzzManager& man, long long round, std::ostream& stream)
{
	auto t1 = std::chrono::high_resolution_clock::now();
	man.runFizzBuzz(round, stream);
	auto t2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> fp_ms = t2 - t1;
	std::cout << "Took " << fp_ms.count() << " ms, ";
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