#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <stabbingLines.h>

#define MAXARRAYSIZE 500
using namespace std;
typedef int PointId;
typedef int LineId;
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

void readPoints(ifstream &inPutPointFile, Point pointsArray[],
                const int MaxPntsSize, int &numPoints)
{
    ifstream input("points.txt");
    int x, y;
    int count = 0;

    PointId pid;
    pointsArray[MaxPntsSize];
    int counts = 0;

    while (input >> pid >> comma >> x >> comma >> y)
    {
        Point count;
        count.Pid = pid;
        count.x = x;
        count.y = y;
        cout << count.Pid << endl;
        pointsArray[counts] = count;
        ++counts;
    }
    cout << "PointID"
         << " "
         << "X-value"
         << " "
         << "Y-Value" << endl;
    for (int i = 0; i < 8; ++i)
    {

        cout << pointsArray[i].Pid << " " << pointsArray[i].x << " " << pointsArray[i].y << endl;
    }
};
void readLines(ifstream &inPutLineFile, Line LinesArray[],
               const int MaxLnsSize, int &numLines)
{
    ifstream lineinput("lines.txt");
    PointId P1, P2;
    int count = 0;

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
