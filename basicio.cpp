// Test Basic Input/Output
//
#include <iostream>
using namespace std;

int main ()
{
	cout << "This " << " is a " << "single C++ statement.\n";

	int age = 20;
	int zipcode = 33201;
	cout << "I am " << age << " years old and zipcode is " << zipcode <<'\n';

	// Standard input (cin)
	int i;
	cout << "Please enter an integer value: ";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << " and its double is " << i*2 << ".\n";
	return 0;
}
