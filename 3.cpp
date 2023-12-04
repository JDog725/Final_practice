//3.cpp(5 pts)
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayArray(int array[], int size);
//add prototype for printRatio


const int SIZE = 11;

int main()
{
    int numbers[SIZE] ={7,-2,4,6, 9, 11,-5, 12, 9, 2, 3};
    //call printRatio here


    return 0;
}
/****************************************************************************
* Write a function called printRatio() that accepts the array of integers
* and size of an array, and returns nothing.
* This function should prints out the ratio of negative, positive and zero values.
            Example: array has value
            The function should print: {7,-2, 4, 6, 9, 11,-5, 12, 9, 2, 3}
            There are 81.82% of positive numbers
            There are 18.18% of negative numbers
            There are no zero numbers
*********************************************************************************/
