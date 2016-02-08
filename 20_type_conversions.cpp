// Testing type conversions
#include <iostream>
using namespace std;

// implicit conversion of classes
class A{};

class B
{
	public:
		// conversion from A (constructor)
		B(const A& x){}
		// conversion from A (assignment)
		B& operator= (const A& x){return *this;}
		// conversion to A (type-cast operator)
		operator A() {return A();}
};

// explicit
class A2{};

class B2
{
	public:
		explicit B2(const A2& x){}
		B2& operator= (const A2& x){return *this;}
		operator A2() {return A2();}
};

void fn(B2 x){}


int main()
{
	// implicit conversion
	short a=2000;
	int b;
	b=a;

	// 
	A foo;
	B bar = foo; // calls constructor
	bar = foo; // calls assignment
	foo = bar; // calls type-cast operator

	//
	A2 foo2;
	B2 bar2(foo2);
	bar2 = foo2;
	foo2 = bar2;

	// fn(foo); // not allowed for explicit ctor.
	fn(bar2);
	
	return 0;
}
