/*
* (Already solved exercice in C++)
* Date: 13/08/2026
* Description: Reads a number and calculates its factorial.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1;
    int factorial = 1;

    cout << "Write a positive integer: ";
    cin >> num;

    if (num >= 0)
    {
        while (count <= num)
        {
            factorial = factorial * count;
            count++;
        }

        cout << "The factorial of your number is: " << factorial << endl;
    }

    else
    {
        cout << "Invalid number." << endl;
    }

    return 0;
}