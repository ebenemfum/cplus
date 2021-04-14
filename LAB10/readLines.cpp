#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500
using namespace std;
typedef int PointId;
typedef int LineId;
int count = 0;
char comma;

struct Point
{                //define a Point struct
    PointId Pid; // Point Id
    int x;       // x-coordinate of a point
    int y;       // y-coordinate of a point
};

struct Line
{               // define a Line by its 2 End points
    LineId Lid; // Line Id
    PointId p1; // first Point
    PointId p2; // second Point
};
void readLines(ifstream &inPutLineFile, Line LinesArray[],
               const int MaxLnsSize, int &numLines)
{
    ifstream lineinput("lines.txt");
    PointId P1, P2;
    count = 0;

    LineId lid;

    int counts = 0;

    while (lineinput >> lid >> comma >> P1 >> comma >> P2)
    {
        Line count;
        count.Lid = lid;
        count.p1 = P1;
        count.p2 = P2;
        cout << count.Lid << endl;
        LinesArray[counts] = count;
        ++counts;
    }
    cout << "LineID"
         << " "
         << "FirstPoint"
         << " "
         << "SecondPoint" << endl;
    for (int i = 0; i < MaxLnsSize; ++i)
    {

        cout << LinesArray[i].Lid << " " << LinesArray[i].p1 << " " << LinesArray[i].p2 << endl;
    }
}

int main()
{
    int y = 5;
    int &yy = y;

    Line LinesArray[MAXARRAYSIZE];
    ifstream inPutLineFile;
    readLines(inPutLineFile, LinesArray, 5, yy);
}
