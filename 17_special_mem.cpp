// Testing special members

#include <iostream>
#include <string>
using namespace std;

// default constructor
class Example1
{
	public:
		int total;
		int accumulate() { return ++total; }
};

class Example2
{
	public:
		int total;
		// constructor
		Example2(int initial_value):total(initial_value){};
		int accumulate() { return ++total; }
};

class Example3
{
	string data;
	public:
	Example3(const string& str):data(str){};
	Example3(){}
	const string& content() const {return data;}
};

// destructor
class Example4
{
	string* ptr;
	public:
	// constructors
	Example4():ptr(new string){}
	Example4(const string& str):ptr(new string(str)){}
	// destructor
	~Example4(){delete ptr;}
	// access content
	const string& content() const {return *ptr;}
};


// copy constructor
class Example5
{
	string* ptr;
	public:
	// constructors
	Example5():ptr(new string){}
	Example5(const string& str):ptr(new string(str)){}
	// destructor
	~Example5(){delete ptr;}
	// copy constructor
	Example5(const Example5& x):ptr(new string(x.content())){}
	// access content
	const string& content() const {return *ptr;}
};

// move constructor/assignment
class Example6
{
	string* ptr;
	public:
	// constructors
	Example6():ptr(new string){}
	Example6(const string& str):ptr(new string(str)){}
	// destructor
	~Example6(){delete ptr;}
	// move constructor
	Example6(Example6&& x):ptr(x.ptr){x.ptr=nullptr;}
	// move assignment
	Example6& operator= (Example6&& x)
	{
		delete ptr;
		ptr = x.ptr;
		x.ptr = nullptr;
		return *this;
	}
	// access content
	const string& content() const {return *ptr;}
	// addition
	Example6 operator+ (const Example6& rhs)
	{
		return Example6(content()+rhs.content());
	}
};


// default and delete implicit members
class Rectangle
{
	int width, height;
	public:
	Rectangle(int x, int y):width(x), height(y){};
	Rectangle() = default;
	Rectangle(const Rectangle& other) = delete;
	int area() { return width*height;}
};


int main()
{
	// Example ex;  // OK. Default constructor
	// Example2 ex(100); // OK, with constructor
	// Example2 ex; // Not valid, no default constructor
	
	Example3 ex1;
	Example3 ex2("Example");

	cout << "The string is: " << ex2.content() << ".\n";
	
	//
	Example4 ex3;
	Example4 ex4("Example");

	cout << "The string is: " << ex4.content() << ".\n";

	//
	Example5 ex5("Example");
	Example5 ex6 = ex5;

	cout << "The string is: " << ex6.content() << ".\n";


	//
	Example6 ex7("Exam");
	Example6 ex8 = Example6("ple"); // move-constructor

    ex7 = ex7 + ex8; // move-assignment
	cout << "The string is: " << ex7.content() << ".\n";

	//
	Rectangle ex9;
	Rectangle ex10(10,20);

	cout << "The area is: " << ex10.area() << "\n";


	return 0;

}
