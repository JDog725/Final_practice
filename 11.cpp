//11.cpp	(25 pts)
#include <iostream>
#include <vector>

using namespace std;

//function prototypes
void displayVector(vector <int> &vec);

/**
Write the C++ code that removes the duplicate values in a vector of integers.
The final vector should be sorted. You can write the solution code in main()
**/
int main()
{
    vector <int> numbers={101,2,44,44,46,1,2,44,1};
    displayVector(numbers);





    return 0;
}

/********************displayVector*****************************
* This function displays the vector of int (need for testing)
*************************************************************/
void displayVector(vector <int> &vec)
{
    for (int i = 0; i <(int)vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout <<endl;
}
