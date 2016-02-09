// Test Statements and flow control
#include <iostream>
#include <string>
using namespace std;


int main ()
{
	// if-else
	int x = 100;
	
	if(x == 100)
	{
		cout << "x is 100" << '\n';
	}
	else
	{
		cout << "x is not 100" << '\n';
	}


	// while loop
	int n = 10;

	while(n>0)
	{
		cout << n << ", ";
		--n;
	}
	cout << "liftoff!\n";


	// do-while loop
	string mystr;
	do
	{
		cout << "Enter text: ";
		getline(cin,mystr);
		cout << "You entered: " << mystr << '\n';
	}while (mystr != "goodbye");


	// for loop
	for(int n=10; n>0; n--)
	{
		cout << n << ", ";
	}
	cout << "liftoff!\n";

	// range-based for loop
	string mystr2 {"Hello!"};

	for(char c : mystr2)
    //for(auto c : mystr2)
	{
		cout << "[" << c << "], ";
	}
	cout << '\n';


	// break-continue-goto statements
	for(int n=10; n>0; n--)
	{
		cout << n <<", ";
		if(n == 3)
		{
			cout << "countdown aborted!\n";
			break;
		}
	}

	for(int n=10; n>0; n--)
	{
		if(n==5) continue;
		cout << n << ", ";
	}
	cout << "liftoff!\n";

	int m=10;
mylabel:
	cout << m << ", ";
	m--;
	if(m>0) goto mylabel;
	cout << "liftoff!\n";


	// switch statement
	x = 2;
	switch(x)
	{
		case 1:
			cout << "x is 1.\n";
			break;
		case 2:
		case 3:
			cout << "x is 2 or 3.\n";
		    break;
	    default:
			cout << "x is not 1, 2 nor 3.\n";
	}

	return 0;
}
