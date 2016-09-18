#include "MatrixType.h"

void main()
{
	int r1, r2, c1, c2;
	cout << "number of rows for matirx one: ";
	cin >> r1;
	cout << "number of columns for matrix two: ";
	cin >> c1;
	cout << "number of rows for matrix two: ";
	cin >> r2;
	cout << "number of columns for matrix two: ";
	cin >> c2;
	
	MatrixType *m1 = new MatrixType(r1, c1);
	MatrixType *m2 = new MatrixType(r2, c2);
	cout << "Matrix One: " << endl << *m1;
	cout << "Matrix Two: " << endl << *m2;
	if (r1 == r2 && c1 == c2)
	{
		MatrixType m3(r1, c1);
		cout << "Addition: " << endl;
		m3 = *m1 + *m2;
		cout << m3;
		cout << "Subtraction: " << endl;
		m3 = *m1 - *m2;
		cout << m3;
		cout << "Multipilcation: " << endl;
		m3 = *m1 * *m2;
		cout << m3;
	}

}