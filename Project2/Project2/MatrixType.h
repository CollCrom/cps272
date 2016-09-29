#pragma once
#include <cmath>
#include <iostream>

using namespace std;

class MatrixType
{
private:
	int rows, cols;
	int **matrix;
public:
	MatrixType(int r, int c);
	~MatrixType();
	void set(int value, int row, int col);
	//MatrixType matrixMultiplication(const MatrixType &m);
	MatrixType operator+(const MatrixType &m);
	MatrixType operator-(const MatrixType &m);
	MatrixType operator*(const MatrixType &m);
	friend ostream &operator<<(ostream &output, const MatrixType &m);
};

