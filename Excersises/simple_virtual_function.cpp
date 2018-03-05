#include <iostream>

using namespace std;

class Base
{
public:
	virtual void call() {cout << "Call from Base\n";}
};

class Derived : public Base
{
public:
	void call() {cout << "Call from Derived\n";}
};


int main(int argc, char **argv)
{
	Base b;
	Derived d;

	Base *ptr = &d;

	ptr -> call();
	return 0;
}