/*
* Date: 01/06/2026
* Description:
* Read 20 numbers into an array. Display the index of the first negative number.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20;
    vector<int> v(n);

    //read the 20 numbers
    for (int i = 0; i < n; i++){
    cout << "Write a number: ";
    cin >> v[i];
    }

    // get the index of the first negative number
    for (int i = 0; i < n; i++) {
        if (v[i] < 0){ 
            cout << "First negative number index [" << i << "]"; break; }
    }

    return 0;
}