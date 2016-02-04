// Testing classes part 1
// 
#include <iostream>
using namespace std;

class Rectangle
{
	int width, height;

	public:
	void set_values(int, int);
	int area()
	{
		return width*height;
	}
};

void Rectangle::set_values(int x, int y)
{
	width = x;
	height = y;
}


int main()
{
	Rectangle rect1,rect2;
	rect1.set_values(3,4);
	rect2.set_values(6,5);
	cout << "Area 1 is: " << rect1.area() << "\n";
	cout << "Area 2 is: " << rect2.area() << "\n";

	return 0;
}

