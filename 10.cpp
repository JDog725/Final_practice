//10.cpp(25 pts)
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
//add prototype for convert


const int SIZE = 11;

int main()
{
    string t1 = "12:00:00AM";
    string t2 = "12:00:00PM";
    string t3 = "10:27:18AM";
    string t4 = "7:00:17PM";
    //call convert function to display a military time
    cout<<"12:00:00AM on a 12-hour clock is "<<convert(t1)<<" on a 24-hour clock.\n";//should output 00:00:00
    cout<<"12:00:00PM on a 12-hour clock is "<<convert(t2)<<" on a 24-hour clock.\n";//should output 12:00:00
    cout<<"10:27:18AM on a 12-hour clock is "<<convert(t3)<<" on a 24-hour clock.\n";//should output 10:27:18
    cout<<"7:00:17PM on a 12-hour clock is "<<convert(t4)<<" on a 24-hour clock.\n";//should output 19:00:17

    return 0;
}
/****************************************************************************
* Write a function called convert() that accepts
*a string contain a time in -hour AM/PM.  The function should convert time
*in to military (24-hour) time. The function should return a new string that
*represents time in hh:mm:ss format.
Hint: You may access each element of the string using an array subscript.
Note: 	12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
        12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
*********************************************************************************/
