/*
* Date: 01/05/2026
* Description:
* Read a number between 50 and 100.
* Display the Fibonacci sequence up to that number.
*/

#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Write a number between 50 and 100: ";
    cin >> limit;

    //check if the number is between 50 and 100
    if (limit < 50 || limit > 100) {
        cout << "Invalid number! " << endl;
        return 0;
    }

    int previous = 0, current = 1, next;

    //calculate the Fibonacci sequence
    while (previous <= limit) {
        cout << previous << " ";
        next = previous + current;
        previous = current;
        current = next;
    }

    cout << endl;
    return 0;
}
