#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> storage;

	int i = 0;

	while (i != 1000000)
	{
		//storage.push_back(i++);
		storage.insert(storage.begin(), i++);
	}

	cout << "Storage size: " << storage.size() << endl;



	return 0;
}

