/*
* (Already solved exercice in C++)
* Date: 10/08/2026
* Description: Reads two integers and states which one is the larger one or if they are equal.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Write the first number: ";
    cin >> num1;

    cout << "Write the second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "The largest number is: " << num1 << endl;
    }

    else if (num2 > num1)
    {
        cout << "The largest number is: " << num2 << endl;
    }

    else
    {
        cout << "Both numbers are equal. " << endl;
    }

    return 0;
}