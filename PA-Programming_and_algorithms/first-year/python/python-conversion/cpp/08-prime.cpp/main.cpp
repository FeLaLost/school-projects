/*
* (Already solved exercice in C++)
* Date: 13/08/2026
* Description: Reads a number and calculates whether it is prime.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int div = 1;
    int quantDiv = 0;

    cout << "Write a positive integer: ";
    cin >> num;

    if (num > 0)
    {
        while (div <= num)
        {
            if (num % div == 0)
            {
                quantDiv++;
            }

            div++;
        }

        if (quantDiv == 2)
        {
            cout << "The number is prime." << endl;
        }
        else
        {
            cout << "The number is not prime." << endl;
        }
    }
    else
    {
        cout << "Invalid number." << endl;
    }

    return 0;
}