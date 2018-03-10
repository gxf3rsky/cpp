#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <string>
#include <typeinfo>
#include <algorithm>

#include <set>
#include <map>

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


int main(int argc, char **argv)
{
	// set<int> s = {1, 2, 3, 4};

	// cout << s.size() << endl;

	// s.insert(5);

	// cout << s.size() << endl;

	// s.insert(5);

	// cout << s.size() << endl;	

	// std::set<std::string> names = {"Paul", "John", "Rick", "Dan", "Alen"};

	// cout << names.size() << endl;

	// for (auto &a : names)
	// 	cout << a << endl;

	std::map<string, int> m = {make_pair("first", 1)};

	cout << m.at("first") << endl;

	std::pair<int, int> p = {3,4};

	cout << p.first << endl;
	cout << p.second << endl;


	return 0;
}