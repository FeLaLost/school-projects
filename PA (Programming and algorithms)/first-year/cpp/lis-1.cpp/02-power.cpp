/*
* Date: 01/05/2026
* Description: 
* Read an integer, then calculate and display separately
* the powers of 2 from 2^0 up to 2^(that number).
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    long long res = 1;
    
    cout << "Write a number: ";
    cin >> num;
    
// calculate and display the powers
for (int i = 0; i <= num; i++) {
        cout << "2^" << i << " == " << res << endl;
        res *= 2;
    }
    return 0;
}
