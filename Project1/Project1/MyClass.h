#pragma once
#include <iostream>

using namespace std;

class MyClass
{
private:
	int x, y;
	int *z;
public:
	MyClass(int xx, int yy, int zz);
	~MyClass();
	void print();
	void set(int xx, int yy, int zz);
	MyClass operator=(const MyClass& m);
};

