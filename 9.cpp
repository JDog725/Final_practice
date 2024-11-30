//9.cpp(15 pts)
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string phrase);

int main()
{
    string input;
    cout << "Enter the string and I will tell if it is a palindrome: " << endl;
    getline(cin,input);
    if (isPalindrome(input))
        cout <<"\nIt is a palindrome\n";
    else
        cout <<"\nIt is not a palindrome\n";
    return 0;
}
/**
7.	(10 pts) Write a function called isPalindrome()
that accepts a string, and returns a boolean value.
This function returns true if the string is a palindrome,
otherwise false. A palindrome is a word or phrase that reads
the same backward as forward (e.g. madam, nurses run, etc.).
Note: string can have spaces for example, "taco cat".**/
bool isPalindrome(string phrase)
{
    int size = phrase.length();
    for(int i = 0; i < (size/2); i++)
    {
        if(phrase[i] == ' ' || phrase[size-(i+1)] == ' ')
        {
            continue;
        }
        if(phrase[i] != phrase[size-(i+1)])
        {
            return false;
        }
    }
    return true;
}
