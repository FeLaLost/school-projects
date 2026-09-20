/*
* Date: 01/05/2026
* Description: 
* Read 10 numbers. Determine and display the smallest 
* and largest numbers in the sequence.
*/

#include <iostream>
using namespace std;

int main() {
    int num, large, small;

    //read 10 numbers
    for (int i = 0; i < 10; i++) {
        cout << "Write a number: " << "loop [" << i + 1 << "]" << endl;
        cin >> num;
        //read the first number
        if (i == 0) {
            large = num;
            small = num;
        }
else {
            // read the largest number
            if (num > large) {
                large = num;
            }
            // read the smallest number
            if (num < small) {
                small = num;
            }
        }
    }
    cout << "Largest number = " << large << endl;
    cout << "Smallest number = " << small << endl;
        
    return 0;
}
