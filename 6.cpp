//6.cpp (10 pts)
#include <iostream>
using namespace std;

const int SIZE = 4;
int absoluteDifference(int array [][SIZE], int ROW);

int main()
{
    int matrix[SIZE][SIZE] = {   {10, 20, 30, 40},
                                {15, 25, 35, 45},
                                {50, 60, 70, 80},
                                {65, 65, 75, 85}};
    //call the function
    cout<<"The absolute difference between the sums of matrix diagonals is "

    //the answer should be |(10+25+70+85) - (40+35+60+65)| = |190- 200| = 10
    return 0;
}
/**
* Write a function called absoluteDifference
* that accepts a 2D square array and
* returns the absolute difference between the sums of its diagonals.
**/


