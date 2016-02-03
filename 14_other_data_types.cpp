//Testing other data types
//
#include <iostream>
using namespace std;

// Unions: members use the same location of memory
struct book1_t
{
	char title[50];
	char author[50];
	union
	{
		float dollars;
		int yen;
	}price;
}book1;

struct book2_t
{
	char title[50];
	char author[50];
	union
	{
		float dollars;
		int yen;
	};
}book2;


// Ennumerated types
enum colors_t {black, blue, green, cyan, red, purple, yellow, white};

enum months_t { january=1, february, march, april,
	            may, june, july, august,
	            september, october, november, december}y2k;

// enum class
// c++11
//enum class Colors {black, blue, green, cyan, red, purple, yellow, white};

//enum class EyeColor : char{blue, green,brown};

int main()
{
	typedef char C;
	typedef char* pChar;
	typedef int narray[50];
	//c++11 extention
	//using C1 = char;
	//using pChar2 = char*;

	C char1;
	pChar ptc1 = &char1;
	narray num1;

	book1.price.dollars = 20.4;
	cout << book1.price.dollars << ", " << book1.price.yen <<".\n";
	book1.price.yen = 20;
	cout << book1.price.dollars << ", " << book1.price.yen <<".\n";

	book2.dollars = 20.4;
	cout << book2.dollars << ", " << book2.yen <<".\n";
	book2.yen = 20;
	cout << book2.dollars << ", " << book2.yen <<".\n";

	//
	colors_t mycolor;

	mycolor = blue;
	cout << mycolor << "\n";
	if(mycolor == blue) mycolor = red;
	cout << mycolor << "\n";

	y2k = october;
	cout << y2k << "\n";

	//c++11
	//Colors mycolor2;
	//EyeColor myeyecolor;

	//mycolor2 = Colors::blue;
	//cout << mycolor2 << "\n";

	//myeyecolor = EyeColor::brown;
	//cout << myeyecolor << "\n";

	return 0;
}
