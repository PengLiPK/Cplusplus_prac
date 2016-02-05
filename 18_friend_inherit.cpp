// Testing friendship and inheritance
//
#include <iostream>
using namespace std;


// friend functions
class Rectangle
{
	int width, height;
	public:
	Rectangle(){}
	Rectangle(int x,int y):width(x), height(y){}
	int area()
	{
		return width*height;
	}
	friend Rectangle duplicate (const Rectangle&);
};

// friend function of class Rectangle, can acess private
// protected members
Rectangle duplicate(const Rectangle& param)
{
	Rectangle res;
	res.width = param.width*2;
	res.height = param.height*2;
	return res;
}


// friend class
class Square;

class Rectangle2
{
	int width, height;
	public:
	int area()
	{
		return width*height;
	}
	void convert(Square a);
};

class Square
{
	friend class Rectangle2;
	private:
	int side;
	public:
	Square(int a):side(a){}
};

void Rectangle2::convert(Square a)
{
	width = a.side;
	height = a.side;
}

// derived class, inheritance
class Polygon
{
	protected:
		int width, height;
	public:
		void set_values(int a, int b)
		{
			width = a;
			height = b;
		}
};

class Rectangle3: public Polygon
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


// constructors and derived classes
class Mother
{
	public:
		Mother()
		{ cout << "Mother: no parameters.\n";}
		Mother(int a)
		{ cout << "Mother: int paramter.\n";}
};

class Daughter:public Mother
{
	public:
		Daughter(int a)
		{ cout << "Daughter: int parameter.\n"; }
};

class Son:public Mother
{
	public:
		Son(int a):Mother(a)
	    { cout << "Son: int parameter.\n";}
};

// multiple inheritance
class Polygonmi
{
	protected:
		int width, height;
    public:
		Polygonmi(int a, int b):width(a),height(b){}
};

class Output
{
	public:
		static void print(int i);
};

void Output::print(int i)
{
	cout << i << "\n";
}

class Rectanglemi:public Polygonmi, public Output
{
	public:
		Rectanglemi(int a, int b):Polygonmi(a,b){}
		int area()
		{
			return width*height;
		}
};

class Trianglemi:public Polygonmi, public Output
{
	public:
		Trianglemi(int a, int b):Polygonmi(a,b){}
		int area()
		{
			return width*height/2;
		}
};


int main()
{
	Rectangle rect1;
	Rectangle rect2(2,3);

	rect1 = duplicate(rect2);
	cout << "The area is: " << rect1.area() << ".\n";

	//
	Rectangle2 rect3;
	Square sqr(4);

	rect3.convert(sqr);
	cout << "The area2 is: " << rect3.area() << ".\n";

	// 
	Rectangle3 rect33;
	Triangle tri11;

	rect33.set_values(4,5);
	tri11.set_values(4,5);

	cout << "The area3 is: " << rect33.area() << ".\n";
	cout << "The area4 is: " << tri11.area() << ".\n";

	//
	Daughter kelly(0);
	Son bud(0);

	//
	Rectanglemi rectmi(4,5);
	Trianglemi trimi(4,5);

	rectmi.print(rectmi.area());
	Trianglemi::print(trimi.area());
	return 0;
}
