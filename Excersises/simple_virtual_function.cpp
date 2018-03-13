#include <iostream>

using std::cout;
using std::endl;

// class Base
// {
// public:
// 	virtual void call() 
// 	{
// 		cout << "Call from Base" << endl;
// 	}
// 	void nonVcall() 
// 	{
// 		cout << "NonVCall from Base" << endl;
// 	}	
// };

// class Derived : public Base
// {
// public:
// 	void call() {cout << "Call from Derived" << endl;}
// 	void nonVCall() {cout << "NonVCall from Derived" << endl;}
// };


// int main(int argc, char **argv)
// {
// 	Base b;
// 	Derived d;

// 	Base *ptr = &d;

// 	ptr -> call();
// 	ptr -> nonVcall();

// 	return 0;
// }


struct Shape
{
	virtual ~Shape() {};
	virtual int draw()
	{
		cout << "Shape::draw()" << endl;
		return 0;
	}

	void call()
	{
		cout << "Shape::call()" << endl;
	}
};

struct Triangle : public Shape
{
	int draw()
	{
		cout << "Triangle::draw()" << endl;
		return 1;
	}

	void call()
	{
		cout << "Triangle::call()" << endl;
	}
};

class Square : public Shape
{
public:
	int draw()
	{
		cout << "Square::draw()" << endl;
		return 2;
	}

	void call()
	{
		cout << "Square::call()" << endl;
	}
};

int main(int argc, char **argv)
{
	Shape *s = new Square();

	int v = s -> draw();
	cout << v << endl;

	delete s;

	return 0;
}

