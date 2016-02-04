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

// Constructor
class Rectangle2
{
	int width, height;

	public:
	Rectangle2(); // Overloading constructor
	Rectangle2(int, int); // Constructor
	int area()
	{
		return width*height;
	}
};

Rectangle2::Rectangle2()
{
	width = 5;
	height = 5;
}

Rectangle2::Rectangle2(int a, int b)
{
	width = a;
	height = b;
}

// member initialization
//
class Circle
{
	double radius;
	public:
	Circle(double r) : radius(r){}
	double area()
	{
		return radius*radius*3.14159265;
	}
};

class Cylinder
{
	Circle base;
	double height;
	public:
	Cylinder(double r, double h) : base(r), height(h){}
	double volume()
	{
		return base.area() * height;
	}
};

int main()
{
	Rectangle rect1,rect2;
	rect1.set_values(3,4);
	rect2.set_values(6,5);
	cout << "Area 1 is: " << rect1.area() << "\n";
	cout << "Area 2 is: " << rect2.area() << "\n";

	//
	Rectangle2 rect3(3,9);
	Rectangle2 rect4;
	cout << "Area 3 is: " << rect3.area() << "\n";
	cout << "Area 4 is: " << rect4.area() << "\n";

	//
	//Rectangle2 rect5{5,9};
	
	//
	Cylinder cyl(10,20);
	cout << "Volume of the cylinder is: " << cyl.volume() << "\n";

	return 0;
}

