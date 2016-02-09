// Test Overloads and templates
//
//
#include <iostream>
#include <string>
using namespace std;


// Overloads example
// Note that a function cannot be overloaded only by 
// its return type. At least one of its parameters must 
// have a different type.
int operate(int a, int b)
{
	return (a*b);
}

double operate(double a, double b)
{
	return (a/b);
}


// 2nd Overloaded functions
int sum (int a, int b)
{
	  return a+b;
}

double sum (double a, double b)
{
	  return a+b;
}


// function template
template <class T>
T sumt(T a, T b)
{
	T result;
	result = a + b;
	return result;
}

// 2nd
template <class T, class U>
bool are_equal(T a, U b)
{
	return (a==b);
}

int main()
{
	int x=5, y=2;
	double m=2.0, n=5.0;

	cout << operate(x,y) << "\n";
	cout << operate(m,n) << "\n";

	cout << sum(10,20) << "\n";
	cout << sum(1.0,1.5) << "\n";

	cout << sumt<int>(10,20) << "\n";
	cout << sumt<double>(1.0,1.5) << "\n";
	cout << sumt(1.0,1.5) << "\n";
	//cout << sumt(10,1.5) << "\n";

	if(are_equal(10,10.0))
	{
		cout << "x and y are equal.\n";
	}
	else
	{
		cout << "x and y are not equal.\n";
	}

	if(are_equal(10,10))
	{
		cout << "x and y are equal.\n";
	}
	else
	{
		cout << "x and y are not equal.\n";
	}


	return 0;
}
