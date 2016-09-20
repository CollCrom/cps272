#include "MyClass.h"

MyClass::MyClass(int xx, int yy, int zz)
{
	x = xx;
	y = yy;
	z = new int;
	*z = zz;
}

MyClass::~MyClass()
{
	delete z;
}

void MyClass::print()
{
	cout << "x:" << x;
	cout << " y:" << y;
	cout << " z:" << *z << endl;
}

void MyClass::set(int xx, int yy, int zz)
{
	x = xx;
	y = yy;
	*z = zz;
}

MyClass MyClass::operator=(const MyClass & m)
{
	this->x = m.x;
	this->y = m.y;
	this->z = new int;
	this->z = m.z;
	return *this;
}
