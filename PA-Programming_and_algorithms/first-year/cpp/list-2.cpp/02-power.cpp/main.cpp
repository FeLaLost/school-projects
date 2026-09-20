/*
* Date: 30/05/2026
* Description:
* Read the base and the exponent. Calculate the power using repetition.
* Create a function for the calculation.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int pon() {
    int base, power, mult = 1;

    cout << "Write the base: ";
    cin >> base;
    cout << "Write the power: ";
    cin >> power;

    //repetition to calculate the power
    for (int i=0; i<power; i++) {
        mult*=base;
    }
    
    cout << "The result is: " << mult;
    return 0;
}

// main
int main() {
    pon();
    return 0;
}
