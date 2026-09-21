/*
* (Already solved exercice in C++)
* Date: 11/08/2026
* Description: Reads a number from 1 to 10 and displays the multiplication table.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1;

    cout << "Enter a number from 1 to 10: ";
    cin >> num;

    while (num < 1 || num > 10)
    {
        cout << "Invalid value. Enter again: ";
        cin >> num;
    }

    while (count <= 10)
    {
        cout << num << " x " << count << " = " << num * count << endl;
        count++;
    }

    return 0;
}