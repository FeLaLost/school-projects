/*
* (Already solved exercice in C++)
* Date: 13/08/2026
* Description: Reads several numbers and shows how many positive, negative, and zero values there are.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    while (count <= 10)
    {
        cout << "Write the " << count << "number: ";
        cin >> num;

        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        count++;
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}