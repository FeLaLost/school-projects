/*
* (Already solved exercice in C++)
* Date: 13/08/2026
* Description: Reads a password and verifies if it is correct.
*/

#include <iostream>
using namespace std;

int main()
{
    int password;
    int rightPass = 1234;
    int attempts = 1;
    int attemptLim = 3;

    cout << "Enter the password: ";
    cin >> password;

    while (password != rightPass && attempts < attemptLim)
    {
        cout << "Incorrect password. Try again: ";
        cin >> password;

        attempts++;
    }

    if (password == rightPass)
    {
        cout << "Access granted." << endl;
    }
    
    else
    {
        cout << "Access blocked." << endl;
    }

    return 0;
}