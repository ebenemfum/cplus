#include <stabbingLines.h>
int main()
{
    char filename[50] = "points.txt";
    ifstream input("points.txt");
    ifstream lineinput("lines.txt");
    Point pointsArray[100];
    Line LinesArray[100];
    Line StabbedLines[10];
    int y = 8;
    int &yy = y;
    int z = 5;
    int &zz = z;
    readPoints(input, pointsArray, y, yy);
    readLines(lineinput, LinesArray, z, zz);
    printLineByCoords(4, LinesArray, z, pointsArray, z);
    getStabbedLines(4, LinesArray, z, z, pointsArray, y, StabbedLines, z, z);
}