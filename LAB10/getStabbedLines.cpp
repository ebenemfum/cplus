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

void getStabbedLines(const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
                     const int MaxPtsSize, Line stabbedLines[],
                     const int MaxStbSize, int &NumOfStbLines)
{
    struct SLine
    {
        LineId Lid; // Line Id
        Point p1;   // first Point
        Point p2;   // second Point
    };
    SLine StabbedLines[10];
    SLine stabline;
    int counts = 0;
    for (int i = 0; i < 5; ++i)
    {
        stabline.Lid = counts;

        if (stabline.Lid == linesArray[i].Lid)
        {
            stabline.p1.Pid = linesArray[i].p1;
            stabline.p2.Pid = linesArray[i].p2;
        }

        StabbedLines[counts] = stabline;
        //cout << StabbedLines[i].Lid << endl;
        ++counts;
        cout << endl;
    }
    for (int y = 0; y < NumLines; ++y)
    {
        for (int i = 0; i < MaxPtsSize; ++i)
        {

            if (StabbedLines[y].p1.Pid == pointsArray[i].Pid)
            {
                StabbedLines[y].p1.x = pointsArray[i].x;
                StabbedLines[y].p1.y = pointsArray[i].y;
            }
            if (StabbedLines[y].p2.Pid == pointsArray[i].Pid)
            {
                StabbedLines[y].p2.x = pointsArray[i].x;
                StabbedLines[y].p2.y = pointsArray[i].y;
            }
        }
        cout << "LineID"
             << " " << endl;
        cout << StabbedLines[y].Lid << endl;
        cout << endl;
        cout
            << "First Point"
            << endl;
        cout << "(" << StabbedLines[y].p1.x << "," << StabbedLines[y].p1.y << ")" << endl;
        cout << endl;
        cout << "(Second Point)" << endl;
        cout << "(" << StabbedLines[y].p2.x << "," << StabbedLines[y].p2.y << ")" << endl;
    }
    cout << endl;

    cout << " These lines were stabbed by x="
         << " " << xcoord << endl;

    for (int i = 0; i < NumLines; ++i)
    {
        if (StabbedLines[i].p1.x >= xcoord || StabbedLines[i].p2.x >= xcoord)
        {

            cout << "Line"
                 << " " << StabbedLines[i].Lid << endl;
        }
    }
};
