#include <iostream>
#include <string>

using namespace std;

void method_1(string &txt)
{
	for (auto i = txt.rbegin(); i != txt.rend(); i++)
		cout << *i;
	cout << endl;
}

void method_2(string &txt)
{
	// char *ptr = &txt.at(txt.size()-1);

	// for (char *ptr = &txt.at(txt.size() - 1); ptr != &txt[0]; ptr--)
	// 	cout << *ptr; 
	// cout << endl;

	char *ptr = &txt[txt.size()];

	while (ptr != &txt[0])
		cout << *--ptr;
	cout << endl;
}

void method_3(string &txt)
{
	for (char *ptr = &txt[txt.size()]; ptr != &txt[0];)
		cout << *--ptr;
	cout << endl;
	

}

int main(int argc, char **argv)
{
	string text = "Here we have some text to reverse";

	// method_1(text);
	// method_2(text);
	method_3(text);

	





	return 0;
}