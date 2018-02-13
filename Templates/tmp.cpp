#include <iostream>
#include <vector>
#include <string>

using namespace std;

// int sum(int a, int b)
// {
// 	return a + b;
// }

// double sum(double a, double b)
// {
// 	return a + b;
// }

template<typename T>
T sum(T a, T b)
{
	return a + b;
}

//------------------------------//

template <class T>
class MyClass
{
public:

	MyClass() {};
	MyClass(const vector<T> &p);
	vector<T> v;
	void print();
};

template <class T>
MyClass<T>::MyClass(const vector<T> &p)
{
  v = p;
};

template <class T>
void MyClass<T>::print()
{
	for(auto i = v.begin() ; i != v.end(); ++i)
	{
		cout << *i << endl;
	}

	cout << endl;
}

int main(int argc, char **argv)
{
	// cout << sum(3,4) << endl;
	// cout << sum(3.5,4.1) << endl;

	MyClass<int> obj;
	obj.v = {1, 2, 3, 4, 5, 6};
	obj.print();

	MyClass<double> objD;
	objD.v = {1.1, 2.3, 4.5};
	objD.print();

	MyClass<string> objS;
	objS.v = {"name", "surname", "company"};
	objS.print();

	MyClass<string> objNS({"company", "name", "surname"});
	objNS.print();

	MyClass<int> objNI({9, 9, 7});
	objNI.print();


	return 0;
}