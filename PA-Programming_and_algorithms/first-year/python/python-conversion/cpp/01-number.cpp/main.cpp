/*
* (Already solved exercice in C++)
* Date: 10/08/2026
* Description: Reads an integer and indicates whether it is positive, negative, or zero.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Write a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive." << endl;
    }

    else if (num < 0)
    {
        cout << "The number is negative. " << endl;
    }

    else
    {
        cout << "The number is zero. " << endl;
    }

    return 0;
}