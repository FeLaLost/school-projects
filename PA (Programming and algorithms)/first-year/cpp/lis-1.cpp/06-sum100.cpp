/*
* Date: 01/05/2026
* Descripton:
* Read a series of numbers until their sum
* exceeds 100. Display the product of the numbers read.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    long long sum = 0, mult = 1;

    //loop to enter the numbers
    while (true) {
        cout << "Write a number: ";
        cin >> num;

        sum += num;
        mult *= num; 
        //finish the sum when it reaches 100.
        if (sum > 100) {break;}
    }

    cout << "Product of all numbers: " << mult << endl;
    return 0;
}
