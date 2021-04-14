#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

typedef int PointId;

typedef int LineId;

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
void printLineByCoords(LineId lid, Line LinesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize)
{
    cout << "LineID"
         << " "
         << "FirstPoint"
         << " "
         << "SecondPoint" << endl;
    for (int i = 0; i < MaxLnsSize; ++i)
    {

        cout << LinesArray[i].Lid << " " << LinesArray[i].p1 << " " << LinesArray[i].p2 << endl;
    }
    Line countn;
    Point p1;
    Point p2;
    countn.Lid = lid;
    for (int i = 0; i < 5; ++i)
    {

        if (countn.Lid == LinesArray[i].Lid)
        {
            p1.Pid = LinesArray[i].p1;
            //p2.Pid = countn.p2.p = LinesArray[i].p2;
            //cout << p1.Pid << endl;
        }
        if (countn.Lid == LinesArray[i].Lid)
        {
            p2.Pid = LinesArray[i].p2;
        }
    }
    for (int i = 0; i < 8; ++i)
    {
        if (p1.Pid == pointsArray[i].Pid)
        {
            p1.x = pointsArray[i].x;
            p1.y = pointsArray[i].y;
        }
        if (p2.Pid == pointsArray[i].Pid)
        {
            p2.x = pointsArray[i].x;
            p2.y = pointsArray[i].y;
        }
    }

    cout << "LineID"
         << " " << endl;
    cout << countn.Lid << endl;
    cout << endl;
    cout
        << "First Point"
        << endl;
    cout << "(" << p1.x << "," << p1.y << ")" << endl;
    cout << endl;
    cout << "(Second Point)" << endl;
    cout << "(" << p2.x << "," << p2.y << ")" << endl;
}
