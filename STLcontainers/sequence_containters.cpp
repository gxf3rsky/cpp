#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <string>
#include <typeinfo>

#include <algorithm>

#include <array>
#include <deque>
#include <vector>

using namespace std;

class MyType
{
public:
	
	MyType(const int &a, const string &s) : number_(a), name_(s) {}	

	friend ostream& operator << (ostream &os, const MyType &m)
	{
		cout << m.number_ << " " << m.name_;
		return os;
	}
	
	int number_;
	string name_;
};

static vector<int> vTest;
static const int samples = 1000;
static const int intToFind = 5;

void generateTestValues(vector<int> &v)
{
	for (int a = 0; a < samples; ++a)
	{
		v.push_back(rand() % 100 + 1);
	}
}

template <typename T>
void searchAndMeassure(const T &a)
{
	std::clock_t start;
	double duration;

	start = std::clock();

	for (auto &i : a)
	{
		if (i == intToFind)
		{			
			break;
		}	
	}

	duration = std::clock() - start / (double) CLOCKS_PER_SEC;

	cout << "Searching duration: " << duration << " seconds." << endl;
}

void searchAndMeassureTests()
{
	// Compare searching in containers.

	searchAndMeassure(vTest);
	
	{
		array<int, samples> testArray;		

		copy(vTest.begin(), vTest.end(), testArray.begin());	// create copy from vTest

		searchAndMeassure(testArray);
	}

	{
		deque<int> testDeque;

		copy(vTest.begin(), vTest.end(), testDeque.begin());

		searchAndMeassure(testDeque);

	}
}


int main(int argc, char **argv)
{
	srand(time(NULL));

	generateTestValues(vTest);

	
	// Array samples of usage.
	/*
	{
		array<MyType, 2> type = {MyType(1, "one"), MyType(2, "two")};

		// for (auto a = type.rbegin(); a != type.rend(); ++a)
		// 	cout << *a << endl;

		// for (auto &a : type)
		// 	cout << a << endl;

		for (auto &a : type)
			a.name_ = "newName", a.number_ = 0;

		for (auto &a : type)
			cout << a << endl;

		array<MyType*, 3> typePtrs = {new MyType(1, "onePTR"), new MyType(2, "twoPTR"), new MyType(3, "threePTR")};

		for (auto i : typePtrs)
			cout << *i << endl;

		for (auto &a : typePtrs)
			delete a;

		for (auto i : typePtrs)
			cout << *i << endl;
	}
	*/

	// Vector samples of usage.
	/*
	{
		vector<MyType> myVec = {MyType(9, "nine"), MyType(8, "eight")};

		for (auto &a : myVec)
			cout << a << endl;
	}*/

	// Deque samples of usage.
	{

	}

	// Forward linked list samples of usage.
	{

	}

	// Double linked list samples of usage.
	{

	}



	




	return 0;
}