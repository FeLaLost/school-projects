/*
* (Already solved exercice in C++)
* Date: 13/08/2026
* Description: Reads several grades and calculates the average among them.
*/

#include <iostream>
using namespace std;

int main()
{
    float grade;
    float sum = 0;
    int quantity = 0;

    cout << "Write a grade between 0 and 10. Write a negative number to stop. ";
    cin >> grade;

    while (grade >= 0 && grade <= 10)
    {
        sum = sum + grade;
        quantity++;

        cout << "Enter another grade between 0 and 10: ";
        cin >> grade;
    }

    if (quantity > 0)
    {
        cout << "Average score: " << sum / quantity << endl;
    }

    else
    {
        cout << "No valid grade was entered. " << endl;
    }

    return 0;
}