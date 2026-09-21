/*
* (Already solved exercice in C++)
* Date: 10/08/2026
* Description: Reads a positive integer and displays the count from 1 up to that number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1;

    cout << "Write a positive integer: ";
    cin >> num;

    if (num > 0)
    {
        while (count <= num)
        {
            cout << count << endl;
            count++;
        }
    }

    else
    {
        cout << "Invalid number. Enter a positive value. " << endl;
    }

    return 0;
}