// Testing exceptions
#include <iostream>
using namespace std;


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
	return 0;
}
