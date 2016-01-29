// Test variables

#include <iostream>
using namespace std;

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

	// terminate the program.
	return 0;
}
