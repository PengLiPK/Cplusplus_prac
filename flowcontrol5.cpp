// Test Statements and flow control
#include <iostream>
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

	return 0;
}
