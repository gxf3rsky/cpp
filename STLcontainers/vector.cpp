#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

	for(auto i = vec.begin(); i != vec.end(); ++i)
	{
		cout << *i << endl;
	}

	return 0;
}
