/*
* Date: 30/05/2026
* Description:
* Read an integer. Display the sum of the odd numbers up to the number read.
* Create a function that returns true for odd numbers.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// function
bool odd() {
    int num, sum = 0;
    bool found = false;

    // makes the sum of the odd numbers
    cin >> um;
    for (int i = 0; i < num; i++) {
        if (i % 2 != 0) {
            sum += i;
            found = true;
        }
    }
    if (found) {
        cout << sum;
    }
    // if the number is invalid
    else {
        cout << "Write a integer";
    }
    return found;
}

// main
int main() {
    odd();
    return 0;
}
}
