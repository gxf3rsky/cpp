#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <typeinfo>

#include <array> 					// 1. Array is a container that encapsulates fixed size arrays.

using namespace std;

int main(int argc, char **argv)
{
	srand(time(NULL));				// Random seed taken from time.
	// int r = rand() % 100;		// Range: 0 -> 99
	// int r = rand() % 100 + 1;	// Range: 1 -> 100
	// int r = rand() % 30 + 1985;	// Range: 1985 -> 2014


	// array<int, 10> ar;

	// for (auto i : ar)
	// 	i = rand() % 20 + 1;

	// for (const auto &j : ar)
	// 	cout << "[" << j << "]";
	// cout << endl;

	// array<float, 5> ar = {1.1, 1.2, 1.3, 1.4, 1.5};
	// array<float, 4> br {2.1, 2.2, 2.3, 2.4};

	// for (auto i : ar)
	// 	cout << i << endl;

	// for (auto i: br)
	// 	cout << i << endl;


	array<string, 9> *stringArray = new array<string, 9>({"abc", "cde", "fgh", "ijk"});

	// stringArray -> fill("nopes");

	// for (const auto &i : *stringArray)
	// 	cout << i << endl;

	// cout << endl;

	// auto i = stringArray -> rbegin();
	// cout << typeid(i).name();



	for (auto i = stringArray -> rbegin(); i != stringArray -> rend(); i++)
		cout << *i << endl;

	delete stringArray;

	

	return 0;
}