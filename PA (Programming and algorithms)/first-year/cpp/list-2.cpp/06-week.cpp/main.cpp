/*
* Date: 31/05/2026
* Description:
*Read a number. Display the corresponding day of the week.
* Create a function for this check.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// function to read the day of the weekend
void week() {
    int num;

    cout << "Enter a number to find the corresponding day of the week: ";
    cin >> num;

    //checks every possible day
    switch (num) {
        //case instead of "if" 
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        //if its none of them
        default: cout << "Enter a number between 1 and 7";
    }
}

// main
int main() {
    week();
    return 0;
}
