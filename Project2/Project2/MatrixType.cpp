#include "MatrixType.h"

MatrixType::MatrixType(int r, int c)
{
	rows = r;
	cols = c;
	matrix = new int *[r];
	for (int i = 0; i < r; i++)
	{
		matrix[i] = new int[c];
		for (int j = 0; j < c; j++) {
			matrix[i][j] = rand() % 100 + 1;
		}
	}
}

MatrixType::~MatrixType()
{
	delete matrix;
}

void MatrixType::set(int value, int row, int col)
{
	this->matrix[row - 1][col - 1] = value;
}

/*MatrixType MatrixType::matrixMultiplication(const MatrixType & m)
{
	MatrixType temp(this->cols, m.rows);
	for (int i = 0; i < this->cols; i++)
		for (int j = 0; j < m.rows; j++)
			temp.set(0, i+1, j+1);

	for (int i = 0; i < this->rows; i++)
		for (int j = 0; j < m.cols; j++)
			for (int k = 0; k < this->cols; k++)
				temp.matrix[i][j] += this->matrix[i][k] * m.matrix[k][j];
	return temp;
}*/

MatrixType MatrixType::operator+(const MatrixType & m)
{
	MatrixType temp(m.rows, m.cols);
	for (int i = 0; i < m.rows; i++)
		for (int j = 0; j < m.cols; j++) {
			temp.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
		}
	return temp;
}

MatrixType MatrixType::operator-(const MatrixType & m)
{
	MatrixType temp(m.rows, m.cols);
	for (int i = 0; i < m.rows; i++)
		for (int j = 0; j < m.cols; j++)
			temp.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];
	return temp;
}

MatrixType MatrixType::operator*(const MatrixType & m)
{
	MatrixType temp(m.rows, m.cols);
	for (int i = 0; i < m.rows; i++)
		for (int j = 0; j < m.cols; j++)
			temp.matrix[i][j] = this->matrix[i][j] * m.matrix[i][j];
	return temp;
}

ostream & operator<<(ostream & output, const MatrixType & m)
{
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
			output << "[" << m.matrix[i][j] << "]";
		output << endl;
	}
	return output;
}
