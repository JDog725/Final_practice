//3.cpp(5 pts)
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
//add prototype for printRatio
void printRatio(int array[], int size);


const int SIZE = 11;

int main()
{
    int numbers[SIZE] ={7,-2,4,6, 9, 11,-5, 12, 9, 2, 3};
    //call printRatio here
    printRatio(numbers, SIZE);


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
void printRatio(int array[], int size)
{
    int countPositive = 0,
        countNegative = 0,
        countZero = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] > 0)
        {
            countPositive++;
        }
        else if(array[i] < 0)
        {
            countNegative++;
        }
        else
        {
            countZero++;
        }
    }

    if(countPositive != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<< (static_cast<double>(countPositive)/size)*100<< "% of positive numbers\n";
    }
    else
    {
        cout << "There are no positive numbers\n";
    }

    if(countNegative != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<< (static_cast<double>(countNegative)/size)*100<< "% of negative numbers\n";
    }
    else
    {
        cout << "There are no negative numbers\n";
    }

    if(countZero != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<< (static_cast<double>(countZero)/size)*100<< "% of zero numbers\n";
    }
    else
    {
        cout << "There are no zero numbers\n";
    }
}