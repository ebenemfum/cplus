#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500;
using namespace std;




class sqrBaseRectBlocks: public rectBlocks{
    public:
     int w=h;
    
};

vector<sqrBaseRectBlocks> sqrBaseRectBlocks;

int main()
{

    int w, h, l;

    int count = 0;

    char comma;

    int counts = 0;

    ifstream input("dataBlocks.dat");

    while (input >> w >> comma >> h >> comma >> l)
    {
        rectBlocks sqrBaseRBlock;

        RBlock.width = w;

        RBlock.height = h;

        RBlock.length = l;

        w=h;

        cout << RBlock.length << endl;

        sqrBaseRectBlocks.push_back(sqrBaseRBlock);

        ++counts;
    }
};