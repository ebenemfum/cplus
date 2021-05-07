#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500;
using namespace std;

class rectBlocks // The rectBlocks class
{
public:         // Access specifier
    int width;  // Width of Rectangle
    int height; // Height of Rectangle
    int length; // Length of Rectangle
};

vector<rectBlocks> rectangleBlocks;

class sqrBaseRectBlocks: public rectBlocks{
    public:
    int W=H;
    
    };

class cuboidBlocks: public sqrBaseRectBlocks{
public:
	int W=H=L;
};


int main()
{

    int w, h, l;

    int count = 0;

    char comma;

    int counts = 0;

    ifstream input("dataBlocks.dat");

    while (input >> w >> comma >> h >> comma >> l)
    {
        rectBlocks RBlock;

        RBlock.width = w;

        RBlock.height = h;

        RBlock.length = l;

        cout << RBlock.length << endl;

        rectangleBlocks.push_back(RBlock);

        ++counts;
    }
};
