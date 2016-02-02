// Testing character sequences
//
#include <iostream>
#include <string>
using namespace std;


int main()
{
	// Null-terminated character sequence '\0'
	char foo1[20];
	char foo2[] = {'H','e','l','l','o','\0'};
	char foo3[] = "Hello";


	char question1[] = "What is your name? ";
	string question2 = "Where do you live? ";
	char answer1[80];
	string answer2;

	cout << question1;
	cin >> answer1;
	cout << question2;
	cin >> answer2;
	cout << "Hello, " << answer1;
	cout << " from " << answer2 << "!\n";

	// Null-terminated character sequences to string
	char ntchar[] = "Hello!";
	string mystring = ntchar;
	cout << mystring << "\n";
	cout << mystring.c_str() << "\n";


	return 0;
}
