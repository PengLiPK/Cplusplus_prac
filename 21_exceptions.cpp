// Testing exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
	virtual const char* what() const throw()
	{
		return "My exception happened";
	}
}myex;


int main()
{
	try
	{
		throw 20;
	}
	catch(int e)
	{
		cout << "An exception occurred. Num is: " << e << "\n";
	}


	//
	try{
		throw 'a';
	}
	catch (int param) { cout << "int exception.\n";}
	catch (char param) { cout << "char exception.\n";}
	catch (...) { cout << "default exception.\n";}


	//
	try
	{
		throw myex;
	}
	catch (exception& e)
	{
		cout << e.what() << "\n";
	}

	// bad_alloc standard exception
	try
	{
		int* myarray = new int[100000000000];
	}
	catch (exception& e)
	{
		cout << "Stardard exception: " << e.what() << "\n";
	}

	return 0;
}
