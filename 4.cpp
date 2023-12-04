//4.cpp(10 pts)
#include <iostream>
using namespace std;

const int SIZE = 32;
//function prototypes
void displayArray(int array[], int size);
//add addition prototype(s) here



int main()
{
    int numbers[SIZE] ={98, 72, 34, 67, 89, 97, 78, 100, 24, 99, 89, 98, 45, 97, 67, 77,
                        88, 34, 78, 79, 95, 32, 100, 58, 79, 85, 82, 92, 89, 91, 84, 82};
    //call displayTopFive

    return 0;
}
/********************************************************************
*There is a class with 32 students.
*The instructor would like to find out the top 5 scores in the final exam.
*Write a function called displayTopFive() that accepts an array of integers
*and the number of items in the array as arguments, and returns nothing.
*The array of integers represents the students scores and it is NOT in any order.
*The function should display only the top 5 scores to the screen in descending order.
Example: 
    Top five: 100, 100, 99, 98, 98
*********************************************************************/












/********************displayArray*****************************
* This function displays the array of int (need for testing)
*************************************************************/
void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i ++)
    {
        cout << array[i]<< " ";
    }
    cout <<endl;
}
