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
  
    cin >> base;
    cin >> power;
    for (int i=0; i<power; i++) {
        mult*=base;
    }
    cout << multi;
    return 0;
}

// main
int main() {
    pon();
    return 0;
}
