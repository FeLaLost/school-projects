/*
* Date: 01/05/2026
* Description:
* Read a number representing the final limit and another number representing a multiple.
* Display the multiples of the first number, ranging from 1 up to the final limit.
*/

#include <iostream>
using namespace std;

int main() {
    int lim, mult;
    
    cout << "Enter the multiplier: ";
    cin >> mult;

    cout << "Write the limit: ";
    cin >> lim;
    
    cout << "Multiples of " << mult << " from 1 to " << lim << ": " << endl;

    // multiplication
    for (int i = 1; i <= lim; i++) {
        if (i % mult == 0) {
            cout << i << "  ";
        }
    }

    cout << endl;
    return 0;
}
