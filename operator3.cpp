// Test operator
//
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int a,b,c;

	// Arithmetic
	// addition, subtraction, multiplication, division,
	// modulo, exponent
	a = 11;
	b = 2;
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	c = a % b;
	c = pow(a,b);
	cout << c << endl;

	// compund assignment
	a+=2;
	a-=2;
	a*=2;
	a/=2;
	a%=2;
	// b contains 3, c contains 3
	c = ++b;
	// b contains 2, c contains 3
	c = b++;

	// Relational operator
	bool test;
	test = (7 == 5);     // evaluates to false
    test = (5 > 4);      // evaluates to true
	//(3 != 2)     // evaluates to true
	//(6 >= 6)     // evaluates to true
	//(5 < 5)      // evaluates to false
	//(a == 5)     // evaluates to false, since a is not equal to 5
	//(a*b >= c)   // evaluates to true, since (2*3 >= 6) is true
	//(b+4 > a*c)  // evaluates to false, since (3+4 > 2*6) is false
	//((b=2) == a) // evaluates to true 
	
	// Logical operator !, &&, ||
	
	
	// Conditional ternary operator. ?
	a = 2;
	b = 7;
	// f condition is true, the entire expression 
	// evaluates to result1, and otherwise to result2
	c = (a>b) ? a : b;
	cout << c << '\n';

	// Comma operator
	c = (b=3,b+2);
	cout << c << '\n';
	cout << b << '\n';

	return 0;
}
