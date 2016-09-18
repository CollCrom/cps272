#include "MyClass.h"

void main()
{
	int z1 = 3;
	int z2 = 6;
	int z3 = 9;
	MyClass foo(1, 2, 3);
	foo.print();
	MyClass bar(4, 5, 6);
	bar.print();

	foo = bar;
	bar.set(7, 8, 9);

	foo.print();
	bar.print();
	return;
}
