#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

//This method that takes a parameter N, indicating how random pairs of indices hi, j,i times it should generate, to update the entries the array A[][].
void populateArray(int A[101][101], int N)
{

    //counter value used to check when N number of elements is printed.

    int count = 0;
    srand((unsigned)time(0));

    for (int x = (rand() % 100) + 1; x < 100; x++)

    {

        for (int y = (rand() % 100) + 1; y < 100; y++)
        {
            //Control Statement used to ensure 2000 indices are geneated
            if (count != N)
            {
                /* cout << "(" << x << "," << y << ")" << endl; */
                ++count;
                A[x][y] += 1;
            }
        }
    }
}

//that takes the values of the coordinates of the corners of the bounding box and reports the indices and counts of the entries in A[][] with positive count values as illustrated in the example
void searchValidEntries(int XL, int YL, int XH, int YH, int A[101][101])
{
    for (int x = XL; x < XH + 1; x++)

    {

        for (int y = YL; y < YH + 1; y++)
        {
            cout << x << ","
                 << " " << y << ";"
                 << " " << A[x][y] << endl;
        }
    }
}
// A main program that declares an array A[101][101] and initialises it and also reads the values of 5 bounding boxes, one line at a time, and reports the indices and counts of the entries in A[][] that lie withing the bounding boxes.
int main()
{
    //A.
    int A[101][101] = {};

    //B.
    populateArray(A, 2000);

    cout << endl;
    cout << endl;

    cout << "C.i (80, 1, 100, 10)" << endl;
    searchValidEntries(80, 1, 100, 10, A);

    cout << endl;
    cout << endl;

    /*
    cout << "C.ii (10, 20, 40, 79)" << endl;
    searchValidEntries(10, 20, 40, 79, A);

   cout << endl;
    cout << endl;
    cout << "C.iii (1, 90, 100, 100)" << endl;
    searchValidEntries(1, 90, 100, 100, A);

    cout << endl;
    cout << endl;
    cout << "C.iv(40, 30, 70, 60)" << endl;
    searchValidEntries(40, 30, 70, 60, A);

    cout << endl;
    cout << endl;
    cout << "C.v (50, 50, 70, 70)" << endl;
    searchValidEntries(50, 50, 70, 70, A); */
}