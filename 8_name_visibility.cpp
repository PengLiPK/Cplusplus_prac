// Test name visibility

#include <iostream>
using namespace std;

int foo;
int foo1;

int fun1()
{
	foo = 1;
	return foo;
}

// namespaces

namespace name1
{
	int value() {return 5;}
}

namespace name2
{
	const double pi = 3.1416;
	double value() {return 2*pi;}
}

namespace name1 { int a=20; }

int main()
{
	int x=10, y=20;
	{
		int x;
		x=50;
		y=50;
		cout << "inner block:\n";
		cout << "x=" << x << ", y=" << y << "\n";
	}
	cout << "outer block:\n";
	cout << "x=" << x << ", y=" << y << "\n";

	
	cout << name1::value() << "\n";
	cout << name2::value() << "\n";
	cout << name2:: pi << "\n";

	using name1::a;

	cout << a << "\n";

	using namespace name1;

	cout << value() << "\n";

	int foo2;
	cout << foo1 << "\n";
	cout << foo2 << "\n";

	return 0;
}
