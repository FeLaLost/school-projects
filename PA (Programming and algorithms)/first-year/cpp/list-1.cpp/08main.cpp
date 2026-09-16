/*
* Date: 01/05/2026
* Description: 
* Read a number and display the sum of all
* even and odd numbers from zero up to the number read.
*/

#include <iostream>
using namespace std;

int main() {
    int num, sumodd = 0, sumeven = 0;
    
    cout << "Limiting number: ";
    cin >> num;

    //calculate the sum of the even numbers
    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            sumeven += i;
        }
        //calculate the sum of the odd numbers
        else {
            sumodd += i;
        }
    }
    cout << "sum of the even numbers: " << sumeven << endl;
    cout << "sum of the odd numbers: " << sumodd;
    return 0;
}
