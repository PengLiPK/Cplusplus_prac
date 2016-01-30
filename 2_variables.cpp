// Test variables

#include <iostream>
#include <string>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main ()
{
	// declaring 1.
	int a, b;
	int result;

	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;

	cout << result;
	cout << "\n";

	// declaring 2
	int aa = 5;
	int bb(3);
	int cc(2);
	int result2;

	aa = aa + bb;
    result2 = aa - cc;
	cout << result2;
	cout << "\n";
	
	// declaring 3
	// int foo = 0;
	// auto bar = foo;
	// decltype(foo) bar2;

	// cout << foo,bar,bar2;
	
	// declaring 4
	string mystring;
	//nullptr is the null pointer value.
	bool bar = false;
	int* p = nullptr;
	//string mystringconst = R"(string with \backslash)"
	//string mystringconst2 = u8"(string with \backslash)"

	mystring = "This is the first string";
	cout << mystring << endl;
	mystring = "This is the second string";
	cout << mystring << endl;


	// terminate the program.
	return 0;
}
