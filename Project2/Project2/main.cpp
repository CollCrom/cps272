#include "MatrixType.h"

void main()
{
	int r1, r2, c1, c2;
	cout << "number of rows for matirx one: ";
	cin >> r1;
	cout << "number of columns for matrix one: ";
	cin >> c1;
	cout << "number of rows for matrix two: ";
	cin >> r2;
	cout << "number of columns for matrix two: ";
	cin >> c2;
	cout << endl;

	MatrixType *m1 = new MatrixType(r1, c1);
	MatrixType *m2 = new MatrixType(r2, c2);

	cout << "Matrix One: " << endl << *m1 << endl;
	cout << "Matrix Two: " << endl << *m2 << endl;

	if (r1 == r2 && c1 == c2)
	{
		MatrixType m3(r1, c1);
		cout << "Addition: " << endl << endl;
		m3 = *m1 + *m2;
		cout << m3;
		cout << "Subtraction: " << endl << endl;
		m3 = *m1 - *m2;
		cout << m3;
		cout << "Multipilcation: " << endl << endl;
		m3 = *m1 * *m2;
		cout << m3;
	}
	/*if (c1 == r2)
	{
		MatrixType m3(r2, c1);
		cout << "Matrix Mutiplication " << endl << endl;
		m3 = m1->matrixMultiplication(*m2);
		cout << m3;
	}*/
	cout << "Some set tests: " << endl << endl;
	m1->set(10, 1, 2);
	m2->set(45, 2, 2);
	cout << *m1 << endl << *m2;
	delete m1;
	delete m2;
}