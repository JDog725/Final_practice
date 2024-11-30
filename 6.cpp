//6.cpp (10 pts)
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 4;
int absoluteDifference(int array [][SIZE]);

int main()
{
    int matrix[SIZE][SIZE] = {   {10, 20, 30, 40},
                                {15, 25, 35, 45},
                                {50, 60, 70, 80},
                                {65, 65, 75, 85}};
    //call the function
    int diagonalDiff = absoluteDifference(matrix);
    cout<<"The absolute difference between the sums of matrix diagonals is " <<diagonalDiff<<endl;

    //the answer should be |(10+25+70+85) - (40+35+60+65)| = |190- 200| = 10
    return 0;
}
/**
* Write a function called absoluteDifference
* that accepts a 2D square array and
* returns the absolute difference between the sums of its diagonals.
**/
int absoluteDifference(int array [][SIZE])
{
    int diagonal1 = 0,
        diagonal2 = 0;
    for(int i = 0; i < SIZE; i++)
    {
        diagonal1 = diagonal1 + array[i][i];
        diagonal2 = diagonal2 + array[(SIZE-1)-i][i];
    }
    int difference = abs(diagonal1-diagonal2);
    return difference;
}


