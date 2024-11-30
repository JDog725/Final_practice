//2.cpp(5 pts)
#include <iostream>
using namespace std;

const int SIZE = 11;
//function prototypes
void displayArray(int array[], int size);
//add prototype for reverseArray
void reverseArray(int array[], int size);

int main()
{
    int numbers[SIZE] ={7,-2,4,6, 9, 11,-5, 12, 0, 2, 3};
    displayArray(numbers, SIZE);
    //call reverseArray here
    reverseArray(numbers, SIZE);

    displayArray(numbers, SIZE);
    return 0;
}
/****************************************************************************
*Write a function called reverseArray() that accepts an array of integers
*and the number of items in the array as arguments, and returns nothing.
*This function reverses the array in place. (e.g. array has values {3, 5, 12, 9, 2}
*will be reversed as {2, 9, 12, 5, 3})
*********************************************************************************/
void reverseArray(int array[], int size)
{
    for(int i = 0; i < (size/2); i++)
    {
        int temp = array[i];
        array[i] = array[(size - i)-1];
        array[(size - i)-1] = temp;
    }
}






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
