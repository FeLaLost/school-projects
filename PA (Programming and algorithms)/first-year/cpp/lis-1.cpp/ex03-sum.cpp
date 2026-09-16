/*
* Date: 01/05/2026
* Description: 
* Read a series of numbers until a negative number is entered.
* Calculate and display the sum of these numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int num = 0, count = 0;

    // write the numbers until a negative number appears
    while (true) {
        cout << "Write a number (Enter a negative number to stop): " << endl;
        cin >> num;
        if (num < 0) {break;}
        cont += num;

    }
    cout << "The sum of the integers is: " << cont << endl;
    
    return 0;
}
