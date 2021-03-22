#include <iostream>

using namespace std;

/* void lower(int matrix[3][3], int row, int col)
{
	int B[(row * col) * ((row * col) + 1) / 2];
	int i, j;
	int x = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i < j)
			{
				cout << " "
					 << " ";
			}
			else
			{
				cout << matrix[i][j] << " ";
				B[x] = matrix[i][j];
				++x;
			}
		}
		cout << endl;
	}
	for (i = 0; i < x; i++)
	{
		cout << B[i];
	}
} */
void LinearIndx(int matrix[3][3], int row, int col)
{
	int B[(row * col) * ((row * col) + 1) / 2];
	int i, j;
	int x = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			B[x] = matrix[i][j];
			++x;
		}
	}

	cout << "Elements In Array" << endl;
	for (i = 0; i < x; i++)
	{
		cout << B[i] << ", ";
	}
	cout << endl;

	cout << "Index of Elements In Array" << endl;
	int y = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (B[j] = matrix[i][j])
			{
				cout << "Index of " << matrix[i][j] << " "
					 << "is "
					 << " " << y;
				++y;
				cout << endl;
			}
		}
	}

	cout << endl;
}

void InverseIndx(int matrix[3][3], int row, int col)
{
	int B[(row * col) * ((row * col) + 1) / 2];
	int i, j;
	int x = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			B[x] = matrix[i][j];
			++x;
		}
	}

	cout << "Elements In Array" << endl;
	for (i = 0; i < x; i++)
	{
		cout << B[i] << ", ";
	}
	cout << endl;

	cout << "Index of Elements In Array" << endl;
	int y = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (B[j] = matrix[i][j])
			{
				cout << "Index of " << matrix[i][j] << " "
					 << "is "
					 << " " << y;
				++y;
				cout << endl;
			}
		}
	}

	cout << endl;
}

int main()
{
	int matrix[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	int row = 3, col = 3;

	/* cout << "Lower triangular matrix: \n";
	lower(matrix, row, col); */
	LinearIndx(matrix, row, col);

	return 0;
}
