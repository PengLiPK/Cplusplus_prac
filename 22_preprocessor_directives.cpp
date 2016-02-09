// Testing preprocessor directives
#include <iostream>
using namespace std;

// macro definitions (#define, #undef)
// #define identifier replacement
#define TABLE_SIZE 100
#define getmax(a,b) ((a)>(b)?(a):(b))

#define str(x) #x

// conditional inclusions (#ifdef, #ifndf, #if, #endif,
// #else and #elif)
#ifdef TABLE_SIZE
int table2[TABLE_SIZE];
#endif

#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
 
#elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
 
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif

int main()
{	
	int table1[TABLE_SIZE];
#undef TABLE_SIZE
	int x=5, y;
	y = getmax(x,2);
	cout << y << endl;
	cout << getmax(7,x) << endl;

	//
	cout << str(test);

	// standard macro names
	cout << "This is the line number " << __LINE__;
	cout << " of file " << __FILE__ << ".\n";
	cout << "Its compilation began " << __DATE__;
	cout << " at " << __TIME__ << ".\n";
	cout << "The compiler gives a __cplusplus value of " << __cplusplus << ".\n";

	return 0;
}
