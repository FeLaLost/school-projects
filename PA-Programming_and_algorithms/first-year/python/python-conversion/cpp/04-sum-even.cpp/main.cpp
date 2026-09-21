/*
* (Already solved exercice in C++)
* Date: 11/08/2026
* Description: Calculates the sum of even numbers from 1 up to a specified number.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1;
    int sum = 0;

    cout << "Write a positive integer: ";
    cin >> num;

    if (num > 0)
    {
        while (count <= num)
        {
            if (count % 2 == 0)
            {
                sum = sum + count;
            }

            count++;
        }

        cout << "Sum of the even numbers: " << sum << endl;
    }
    
    else
    {
        cout << "Invalid number." << endl;
    }

    return 0;
}