#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

#define MAXARRAYSIZE 500
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

void readPoints(ifstream &inPutPointFile, Point pointsArray[],
                const int MaxPntsSize, int &numPoints)
{
    ifstream input("points.txt");
    int x, y;
    int count = 0;
    char comma;
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
