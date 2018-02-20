#include <iostream>
#include <cstdlib>
#include <time.h>

#include <array> 					// 1. Array is a container that encapsulates fixed size arrays.

using namespace std;

int main(int argc, char **argv)
{
	srand(time(NULL));				// Random seed taken from time.
	// int r = rand() % 100;		// Range: 0 -> 99
	// int r = rand() % 100 + 1;	// Range: 1 -> 100
	// int r = rand() % 30 + 1985;	// Range: 1985 -> 2014


	array<int, 10> ar;

	for (auto i : ar)
		i = rand() % 20 + 1;

	for (const auto &j : ar)
		cout << "[" << j << "]";
	cout << endl;
	

	

	return 0;
}