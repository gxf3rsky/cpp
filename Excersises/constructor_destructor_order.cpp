#include <iostream>

using std::cout;
using std::endl;



class Figure
{
public:
	Figure() {cout << "Figure::Figure()" << endl;}
	~Figure() {cout << "Figure::~Figure()" << endl;}
};

class Square : public Figure
{
public:
	Square() {cout << "Square::Square()" << endl;}
	~Square() {cout << "Square::~Square()" << endl;}
};

class Tile : public Square
{
public:
	Tile() {cout << "Tile::Tile()" << endl;}
	~Tile() {cout << "Tile::~Tile()" << endl;}
};


int main(void)
{
	Figure f;
	Square s;
	Tile t;

	// return 0;
}