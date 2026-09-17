/*
* Date: 01/06/2026
* Description:
* Read 15 numbers into an array. Count and display the number of even and odd numbers.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 15;
    int sumO = 0, sumE = 0;
    vector<int> v(n);

    //read the numbers
    for (int i = 0; i < n; i++){ 
        cout << "Write a number: ";
        cin >> v[i];
    }

    //checks if the number is divisible by 2
    for (int c : v) {
        if (c % 2 == 0) sumE++;
        else sumO++;
    }

    cout << "The number of odd numbers is: "<< sumO << endl;
    cout << "The number of even numbers is:  " << sumE;

    return 0;
}