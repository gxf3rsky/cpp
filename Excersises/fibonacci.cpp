#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void fib(vector<int> &vec, int &value)
{
	if (value > 20)
		return;

	vec.push_back(vec[value] + vec[value + 1]);

	fib(vec, value);
}


int main(void)
{
	// Method 1.:
	// vector<int> f {0,1};

	// int amount = 18; // prints first 20 elems.

	// for (int i = 0; i < amount; ++i)
	// 	f.push_back(f[i] + f[i + 1]);

	// for (auto &a : f)
	// 	cout << a << endl;

	// Method 2.:

	vector<int> f {0,1};

	int i = 1;

	fib(f, i);

	for (auto &a : f)
		cout << a << endl;
}
