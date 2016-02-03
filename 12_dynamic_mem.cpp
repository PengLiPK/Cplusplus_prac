// Testing dynamic memory
//
#include <iostream>
#include <new>
using namespace std;


int main()
{
	int* foo;
	foo = new int[5]; // if allocation fails, an exception is thrown.
	delete[] foo;

	// Nothrow method to check if the allocation was successful
	// nothrow method is likely to produce less efficient code 
	// than exceptions.
	foo = new(nothrow) int[5];
	if(foo == nullptr)
	{
		cout << "Error: memory could not be allocated!\n";
	}
	delete[] foo;

	//
	int i,n;
	int* p;
	cout << "How many numbers would you like to type?";
	cin >> i;
	p = new(nothrow) int[i];

	if(p == nullptr)
	{
		cout << "Error: memory could not be allocated!\n";
	}
	else
	{
		for(n=0; n<i; n++)
		{
			cout << "Enter number: ";
			cin >> p[n];
		}
		cout << "The numbers are: ";
		for(n=0; n<i; n++)
		{
			cout << p[n] << " " ;
			cout << *(p+n) << " ";
		}
		cout << "\n";
		
		delete[] p;
	}

	return 0;
}
