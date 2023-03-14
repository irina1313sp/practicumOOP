#include "Matrix.h"
#include <iostream>
#include <cstring>




Matrix::Matrix(int rows, int cols)
{
	m_rows = rows;
	m_cols = cols;
	m_data = new int* [rows];
	for (size_t i = 0; i < cols; i++)
	{
		
	}
}

Matrix::~Matrix()
{
}

Matrix::Matrix(const Matrix& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;
}

Matrix& Matrix::operator=(const Matrix& other)
{
	if (this!=&other)
	{
		for (int i = 0; i < m_rows; i++)
		{

		}
	}
	return *this
}

Matrix::Matrix(Matrix&& other)
{
}

Matrix& Matrix::operator=(Matrix&& other)
{
	// TODO: insert return statement here
}

int& Matrix::operator()(int row, int col)
{
	// TODO: insert return statement here
}

Matrix Matrix::operator+(const Matrix& other) const
{
	return Matrix();
}

Matrix Matrix::operator-(const Matrix& other) const
{
	return Matrix();
}

Matrix Matrix::operator*(const Matrix& other) const
{
	return Matrix();
}

bool Matrix::operator==(const Matrix& other) const
{
	return false;
}

void Matrix::copy(const Matrix& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	m_data = new int* [m_rows];
	for (int i = 0; i < m_rows; i++)
	{
		m_data[i] = new int [m_cols];
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
}

void Matrix::destroy()
{
	for (int i = 0; i < m_rows; i++)
	{
		delete[] m_data;
	}
}

Matrix transpose(const Matrix& matrix)
{
	return Matrix();
}

void print(const Matrix& matrix)
{
}
