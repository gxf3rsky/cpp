// Types of function arguments.

#include <iostream>

using std::cout;
using std::endl;

// 1. Args passed by value.
// (Are copied into function scope)

// void add(int x, int y)
// {
// 	x += 1;
// 	y += 1;
// }

// 2. Args passed by reference.
// (Are not copied, a reference to a variable is treated exactly the same
// as the variable itself. Values passed by reference will be changed)

// void add(int &x, int &y)
// {
// 	x += 1;
// 	y += 1;
// }

// 3. Args passed by const reference.
// It allows not to copy big objects and dissalowing for modifying the passed arg.

// void add (const int &x, const int &y)
// {
// 	x += 1;
// 	y += 1;
// }

// 4. Args passed by pointer.

// void add(int *x, int *y)
// {
// 	*x += 1;
// 	*y += 1;
// }

// 4.a Args passed by pointer.
// The address is copied into function scope, so only dereferencing
// it will make the passed object change, assigning to pointers some address not
// makes change.

void add(int *x, int *y)
{
	int a = 0;
	x = &a;
	y = &a;
}

// 5. Args passed by const pointer.
// It allows not to copy big objects and dissalowing for modifying the passed arg.

// void add(const int *x, const int *y)
// {
// 	*x += 1;
// 	*y += 1;
// }

// 6. Args passed by pointer to reference.
// It allows to make changes on address passed by an argument,
// so after exiting the function scope te address will be changed.


// void add(int *&x, int *&y)
// {
// 	*x += 1;
// 	*y += 1;
// 	x = nullptr;
// 	y = nullptr;
// }


int main(int argc, char *argv[])
{
	int a = 5;
	int b = 9;

	int *ap = &a;
	int *bp = &b;

	add(ap, bp);

	cout << "*a: " << *ap << endl;
	cout << "*b: " << *bp << endl;


	return 0;
}