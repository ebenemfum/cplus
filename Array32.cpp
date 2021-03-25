
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void InverseIndx(int matrix[32][32], int row, int col, int U)
{
    int B[(row * col) * ((row * col) + 1) / 2];
    int i, j;
    int x = 0; //counter value
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

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == B[U])
            {
                cout << "Index of"
                     << " " << B[U] << " "
                     << "In The Matrix Is"
                     << " "
                     << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

int main()
{

    int k = 0;

    int A[32][32];
    int row = 32, col = 32;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = rand() % 1000 + 1;
            ;
        }
    }
    int size = row * col;
    int B[size];
    int C[10][10];

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
                cout << A[i][j] << "  ";
                B[x] = A[i][j];
                C[i][j] = B[x];

                ++x;
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "The first 20 values of the lower trinagular elements of A[32][32]:";
    for (i = 0; i < 20; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (A[i][j] == B[k] && k != 20)
            {
                cout << "Index of"
                     << " " << B[k] << " "
                     << "In The Matrix Is"
                     << " "
                     << "(" << i << "," << j << ")" << endl;
                ++k;
            };
        }
    }

    cout << endl;
    cout << "The first 20 elements of B[] and their respective indices;" << endl;
    for (i = 0; i < 20; i++)
    {
        cout << "Index of"
             << " " << B[i] << " "
             << "In The Array Is"
             << " " << i << endl;
    }
    cout << endl;
    cout << endl;
    int h = 0;
    int rowl = 10;
    int coll = 10;
    for (i = 0; i < rowl; i++)
    {
        for (j = 0; j < coll; j++)
        {
            C[i][j] = B[h++];
        }
    }
    cout << endl;

    cout << "The first 20 elements of C[][] and their respective indices;" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {

            cout << "Index of"
                 << " " << C[i][j] << " "
                 << "In The Matrix Is"
                 << " "
                 << "(" << i << "," << j << ")" << endl;
        }
    }
}