#include <iostream>
#include <limits>

using std::cout;
using std::endl;
using std::numeric_limits;

void check_endianess_1()
{
	int a = 1;
	char *ptr = reinterpret_cast<char*>(&a);

	*ptr ? cout << "little\n" : cout << "big\n";
}

void check_endianess_2()
{
	union
	{
		int a = 1;
		char b;
	} end;

	end.b ? cout << "little\n" : cout << "big\n";
}

template<typename T>
void bin(T value)
{
	int size = sizeof(T) * 8;
	for (; size >= 0; --size)
		cout << ((value >> size) & 0x1);
	cout << endl;
}

int main(int argc, char **argv)
{
	check_endianess_1();
	check_endianess_2();

	int value = 152;	//1001 1000
	char c = 0x1;
	// float d = numeric_limits<float>::max();

	// for (int a = 31; a >= 0; --a)
	// 	cout << ((value >> a) & 0x1);
	// cout << endl;

	bin(value);
	bin(c);
	// bin(d);

	return 0;
}