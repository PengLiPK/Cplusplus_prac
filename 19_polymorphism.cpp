// Testing Polymorphism
//
#include <iostream>
using namespace std;

// pointers to base class
class Polygon
{
	protected:
		int width, height;
	public:
		void set_values(int a, int b)
		{
			width=a;
			height=b;
		}
};

class Rectangle: public Polygon
{
	public:
		int area()
		{
			return width*height;
		}
};

class Triangle: public Polygon
{
	public:
		int area()
		{
			return width*height/2;
		}
};

// virtural members
class Polygon2
{
	protected:
		int width, height;
	public:
		void set_values(int a, int b)
		{
			width=a;
			height=b;
		}
		virtual int area()
		{
			return 0;
		}
};

class Rectangle2: public Polygon2
{
	public:
		int area()
		{
			return width*height;
		}
};

class Triangle2: public Polygon2
{
	public:
		int area()
		{
			return width*height/2;
		}
};


// abstract base classes
class Polygon3
{
	protected:
		int width,height;
	public:
		void set_values(int a, int b)
		{
			width=a;
			height=b;
		}
		virtual int area() = 0; // pure virtural function
		void printarea()
		{
			cout << this->area() << "\n";
		}
};

class Rectangle3: public Polygon3
{
	public:
		int area(void)
		{
			return width*height;
		}
};

class Triangle3: public Polygon3
{
	public:
		int area(void)
		{
			return width*height/2;
		}
};


// dynamic allocation 
class Polygon4
{
	protected:
		int width,height;
	public:
		Polygon4(int a, int b):width(a),height(b){}
		void set_values(int a, int b)
		{
			width=a;
			height=b;
		}
		virtual int area() = 0; // pure virtural function
		void printarea()
		{
			cout << this->area() << "\n";
		}
};

class Rectangle4: public Polygon4
{
	public:
		Rectangle4(int a, int b):Polygon4(a,b){}
		int area(void)
		{
			return width*height;
		}
};

class Triangle4: public Polygon4
{
	public:
		Triangle4(int a, int b):Polygon4(a,b){}
		int area(void)
		{
			return width*height/2;
		}
};


int main()
{
	Rectangle rect;
	Triangle tri;
	Polygon* ppoly1 = &rect;
	Polygon* ppoly2 = &tri;
	ppoly1->set_values(4,5);
	ppoly2->set_values(2,3);

	cout << rect.area() << "\n";
	cout << tri.area() << "\n";
	//	cout << ppoly2->area() << "\n"; // Not valid


	//
	Rectangle2 rect2;
	Triangle2 tri2;
	Polygon2 poly2;
	Polygon2* ppoly21 = &rect2;
	Polygon2* ppoly22 = &tri2;
	Polygon2* ppoly23 = &poly2;

	ppoly21->set_values(4,5);
	ppoly22->set_values(4,5);
	ppoly23->set_values(4,5);
	cout << ppoly21->area() << "\n";
	cout << ppoly22->area() << "\n";
	cout << ppoly23->area() << "\n";

	//
	Rectangle3 rect3;
	Triangle3 tri3;
	Polygon3* ppoly31 = &rect3;
	Polygon3* ppoly32 = &tri3;

	ppoly31->set_values(4,5);
	ppoly32->set_values(4,5);
	cout << ppoly31->area() << "\n";
	cout << ppoly32->area() << "\n";
	ppoly31->printarea();

	// dynamic allocation and polymorphism
	/* Polygon3* ppoly41 = new Rectangle3;
	Polygon3* ppoly42 = new Triangle3;
	ppoly41->set_values(4,5);
	ppoly42->set_values(4,5);
	ppoly41->printarea();
	cout << ppoly42->area() << "\n";
	delete ppoly41;
	delete ppoly42;*/

	Polygon4* ppoly41 = new Rectangle4(4,5);
	Polygon4* ppoly42 = new Triangle4(4,5);
	ppoly41->printarea();
	cout << ppoly42->area() << "\n";
	delete ppoly41;
	delete ppoly42;

	return 0;
}

