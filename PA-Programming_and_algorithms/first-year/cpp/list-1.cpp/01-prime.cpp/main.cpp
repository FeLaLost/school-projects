/*
* Date: 01/05/2026
* Description:
* Read a number. Check and display whether the number is prime.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;

    cout << "Write a number: ";
    cin >> num;

    // check if the number is divisible by 2
    if (num < 2) {
        prime = false;
    } 
    // check if it is prime
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
    }
    // result
    if (prime) {
        cout << num << "Your number is prime." << endl;
    } else {
        cout << num << ". Your number is not prime.";
    }

    return 0;
}
