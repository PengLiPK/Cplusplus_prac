// Testing type conversions
#include <iostream>
#include <exception>
#include <typeinfo>

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


// dynamic_cast
class Base
{
	virtual void dummy(){}
};

class Derived: public Base
{
	int a;
};



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
	

	// type casting
	double x = 10.3;
	int y;
	y = int(x); //functional notation
	y = (int) x; //c-like cast notation


	//
	try
	{
		Base* pba = new Derived;
		Base* pbb = new Base;
		Derived* pd;

		pd = dynamic_cast<Derived*>(pba);
		if(pd==0) cout << " Null pointer on first type-cast.\n";

		pd = dynamic_cast<Derived*>(pbb);
		if(pd==0) cout << " Null pointer on second type-cast.\n";

	} catch(exception& e) {cout << "Exception" << e.what();}

	//
	int * aa,bb;
	aa=0;bb=0;
	if (typeid(aa) != typeid(bb))
	{
		cout << "The type of aa is: " << typeid(aa).name() << ".\n";
		cout << "The type of bb is: " << typeid(bb).name() << ".\n";
	}

    try
	{
		Base* aaa = new Base;
		Base* bbb = new Derived;
		cout << "aaa is: " << typeid(aaa).name() << ".\n";
		cout << "bbb is: " << typeid(bbb).name() << ".\n";
		cout << "*aaa is: " << typeid(*aaa).name() << ".\n";
		cout << "*bbb is: " << typeid(*bbb).name() << ".\n";
	} catch(exception& e) {cout << "Exception" << e.what();}


	return 0;
}
