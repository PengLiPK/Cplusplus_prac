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

// access an external variable from within a function
// arguments can be passed by reference, instead of by value
void duplicate(int& a, int&b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

// default values in function
int subtraction(int a, int b=2)
{
	int r;
	r = a - b;
	return r;
}

// declare functions prototype
void odd(int x);

// recursivity
long factorial(long a)
{
	if(a>1)
	{
		return (a * factorial(a-1));
	}
	else
	{
		return 1;
	}
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


	int xr=1, yr=3, zr=7;
	duplicate(xr,yr,zr);
	cout << "xr=" << xr << ", yr=" << yr << ", zr=" << zr << ".\n";

	cout << subtraction(12) << "\n";

	odd(20);


	long number = 11;
	cout << number << "! = " << factorial(number) << "\n";

	return 0;
}


void odd(int x)
{
	if((x%2)!=0)
	{
		cout << "It is odd.\n";
	}
	else
	{
		cout << "It is even.\n";
	}
}
