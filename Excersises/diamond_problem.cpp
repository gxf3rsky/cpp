#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	int b_;
};

class Wall : virtual public Base
{
public:
	int w_;
};

class Roof : virtual public Base
{
public:
	int r_;
};

class Home : public Wall, public Roof
{
public:
	int h_;
};

int main(void)
{
	Home h;
	
	cout << sizeof(Base) << endl;
	cout << sizeof(Wall) << endl;

}