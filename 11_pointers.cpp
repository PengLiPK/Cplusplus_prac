// Testing Pointers

#include <iostream>
using namespace std;

// Pointer as arguments
void increment_all(int* start, int* stop)
{
	int* current = start;
	while (current != stop)
	{
		++(*current); // increment value;
		++current; // increment pointer;
	}
}

void print_all(const int* start, const int* stop)
{
	const int* current = start;
	while(current != stop)
	{
		cout << *current << "\n";
		++current; //increment pointer
	}
}

int main()
{
	int value1,value2;
	int *myp;

	myp = &value1;
	*myp = 10;
	myp = &value2;
	*myp = 20;
	cout << "Value 1 is " << value1 << "\n";
	cout << "Value 2 is " << value2 << "\n";

	// 2nd example
	int val3=5, val4=15;
	int *p3, *p4;

	p3 = &val3;
	p4 = &val4;
	cout << "Address p3 is " << p3 << "\n";
	cout << "Address p4 is " << p4 << "\n";
	*p3 = 10;
	*p4 = *p3;  // Value pointed to by p4 = value pointed to by p3.
	p3 = p4;    // value of pointer p4 is copied to p3.
	*p3 = 20;
	cout << "Address p3 is " << p3 << "\n";
	cout << "Address p4 is " << p4 << "\n";
	cout << "Value 3 is " << val3 << "\n";
	cout << "Value 4 is " << val4 << "\n";

	// Pointers and arrays
	int nums[5];
	int *pn;

	pn = nums;
	*pn = 10;
	pn++;
	*pn = 20;
	pn = &nums[2]; *pn = 30;
	pn = nums + 3; *pn = 40;
	pn = nums; *(pn+4) = 50;

	for(int n=0; n<5; n++)
	{
		cout << nums[n] << ", ";
	}
	cout << "\n";

	// init pointer
	int initvar;
	int *pinit = &initvar;
	int *pinit2 = pinit;

	// pointer arithmetics
	// char is 1 byte; short 2 bytes; long 4 bytes.
	char achar;
	char *pchar;
	short ashort = 2;
	short *pshort = &ashort;
	long along;
	long *plong = &along;

	achar = 'a';
	pchar = &achar;

	cout << "Pchar address is: " << pchar << ".\n";
	cout << "Pshort address is: " << pshort << ".\n";
	cout << "Plong address is: " << plong << ".\n";
	++pchar; ++pshort; ++plong;
	cout << "Pchar address is: " << pchar << ".\n";
	cout << "Pshort address is: " << pshort << ".\n";
	cout << "Plong address is: " << plong << ".\n";

	
	//
	int num11[] = {10,20,30};
	increment_all(num11, num11+3);
	print_all(num11,num11+3);

	//
	const char* pconchar = "hello";
	cout << "Value is: " << *pconchar << ".\n";
	cout << "Address is: " << pconchar << ".\n";

	return 0;
}

