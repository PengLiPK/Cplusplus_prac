// Testing classes part 2

#include <iostream>
using namespace std;

// cartesian vector and operator
class CVector
{
	public:
		int x,y;
		// function name CVector (constructor)
		CVector(){};
		CVector(int a, int b) : x(a),y(b){}

		// function that returns a CVector
		CVector operator+ (const CVector&);
};

CVector CVector::operator+ (const CVector& param)
{
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

// non-member operator overloads
class CVector2
{
	public:
		int x,y;
		// function name CVector2 (constructor)
		CVector2(){};
		CVector2(int a, int b) : x(a),y(b){}
};

CVector2 operator+ (const CVector2& lhs, const CVector2& rhs)
{
	CVector2 temp;
	temp.x = lhs.x + rhs.x;
	temp.y = lhs.y + rhs.y;
	return temp;
}


int main()
{
	CVector a(3,1);
	CVector b(1,2);
	CVector c;
	// c = a.operator+ (b);
	c = a + b;
	cout << "c=(" << c.x << ", " << c.y << ")\n";

	CVector2 aa(6,1);
	CVector2 bb(6,2);
	CVector2 cc;
	cc = aa + bb;
	cout << "cc=(" << cc.x << ", " << cc.y << ")\n";

	return 0;
}
