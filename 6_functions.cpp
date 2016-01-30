// Test functions
//
#include <iostream>
using namespace std;

// An example
int addition (int a, int b)
{
	int r;
	r = a + b;
	return r;
}

// Function with no type
//
void printmessage()
{
	cout << "This is a void function!\n";
}


int main ()
{
	int z;
	z = addition(5,3);
	cout << "The result is " << z << ".\n";

	int a=5, b=3, c;
	cout << "The second result is " << addition(a,b) << ".\n";
	z = 4 + addition(a,b);
	cout << "The third result is " << z << ".\n";

	printmessage();

	return 0;
}
