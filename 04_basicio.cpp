// Test Basic Input/Output
//
#include <iostream>
#include <string>
#include <sstream>
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

	// Get strings
	string mystr;
	cout << "What's your name? ";
	cin >> mystr;
	cout << mystr << "\n";

	cout << "What's your name? ";
	// flush the newline character out of the buffer.
	cin.ignore();
    getline(cin,mystr);
	cout << "Hello " << mystr << ".\n";


	// stringstream
	string mystr2;
	float price=0;
	int quantity=0;
	cout << "Enter price: ";
	//cin.ignore();
	getline(cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
	//cin.ignore();
    getline(cin,mystr);
	stringstream(mystr) >> quantity;
	cout << "Total price: " << price*quantity << endl;

	return 0;
}
