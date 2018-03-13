#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	// Setting bit on bitpos.

	int value = 4;
	int bitpos = 1;

	cout << (value | (0x1 << bitpos)) << endl;

	// Clearing bit on bitpos.
	int value2 = 5;
	int bitpos2 = 0;

	cout << (value2 & ~(0x1 << bitpos2)) << endl;

	// Toggle/filp bit on bitpos. (turn on if not set, turn off if its set)
	int value3 = 5;
	int bitpos3 = 2;

	cout << (value3 ^ (0x1 << bitpos3)) << endl;

	// Checking a bit.
	int value4 = 5;
	int bitpos4 = 1;

	cout << ((value4 >> bitpos4) & 1) << endl;
}