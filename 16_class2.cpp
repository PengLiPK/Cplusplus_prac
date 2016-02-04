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


// example on this
class Dummy
{
	public:
		bool isitme(Dummy& param);
};

bool Dummy::isitme(Dummy& param)
{
	// this represents a pointer to the object 
	// whose member function is being executed.
	if(&param == this)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Static members
class Dummy2
{
	public:
		static int n;
		Dummy2(){n++;}
};

int Dummy2::n=0;


// Const member functions
class MyClass
{
	public:
		int x;
		MyClass(int val):x(val){};
		// int get(){return x;} // Cannot be called
		// const member function
		// int get() const {return x;} 
		// member function returning a const&
		// const int& get() {return x;}
		// const member function returning a const& 
		const int& get() const {return x;}
		int& get() {return x;}
};


// class templates


int main()
{
	CVector a(3,1);
	CVector b(1,2);
	CVector c;
	// c = a.operator+ (b);
	c = a + b;
	cout << "c=(" << c.x << ", " << c.y << ")\n";

	//
	CVector2 aa(6,1);
	CVector2 bb(6,2);
	CVector2 cc;
	cc = aa + bb;
	cout << "cc=(" << cc.x << ", " << cc.y << ")\n";

	//
	Dummy da;
	Dummy* db = &da;
	if(db->isitme(da))
	{
		cout << "Yes, &da is db.\n";
	}

	//
	Dummy2 d2a;
	cout << d2a.n << "\n";
	Dummy2 d2b[5];
	cout << d2a.n << ", " << d2b[0].n << ", " << d2b[1].n << "\n";
	Dummy2* d2c = new Dummy2;
	cout << d2a.n << ", " << d2b[0].n << ", " << Dummy2::n << "\n";

	delete d2c;


	// const member functions
	const MyClass cmf(10);
	// cmf.x = 20 // Not valid: x cannot be modified
	cout << cmf.x << "\n";
	cout << cmf.get() << "\n";

	// overloading members on constness
	MyClass omc(10);
	const MyClass cmf2(20);
	omc.get() = 15;
	cout << omc.get() << "\n";
	cout << cmf2.get() << "\n";

	return 0;
}
