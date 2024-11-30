//5.cpp(10 pts)
/************************************************************
Define and initialize 2D array with the table of values below.
Identify what is the appropriate data type for the array based on
the values in the table. Then print out all the data in the array
where each row is separated by a newline and each element in the
row is separated by a space.
12	8	1	9
34	1	0	2
7	8	89	6
**************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int rowNum = 3;
    int colNum = 4;
    int bigArray[rowNum][colNum] = {{12, 8, 1, 9},
                                    {34, 1, 0, 2},
                                    {7, 8, 89, 6}};
    for(int i = 0; i < rowNum; i++)
    {
        for(int j = 0; j < colNum; j++)
        {
            cout << bigArray[i][j] << " ";
        }
        cout << endl;
    }
}

