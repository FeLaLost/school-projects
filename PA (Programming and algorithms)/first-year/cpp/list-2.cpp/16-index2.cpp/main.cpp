/*
* Date: 01/06/2026
* Description:
* Read 15 numbers into an array. Display the index of the smallest and the largest value.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 15, more, less;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        //read the numbers
        cout << "Write a number: ";
        cin >> v[i];
        // get the largest and smallest values 
        if (i == 0) { more = v[i]; less = v[i]; }
        if (more < v[i]) more = v[i];
        if (less > v[i]) less = v[i];
    }

    // gets the index of the largest number
    for (int i = 0; i < n; i++) {
        if (more == v[i]){
            cout << "Largest number index [" << i << "]" << endl; break; }
    }

    // gets the index of the smallest number
    for (int i = 0; i < n; i++) {
        if (less == v[i]){
            cout << "Smallest number index [" << i << "]"; break; }
    }

    return 0;
}