/*
* Date: 01/06/2026
* Description:
* Read 10 numbers into an array. Replace negative numbers with zero. Display the array.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<int> v(n);

    //read all ten numbers
    for (int i = 0; i < n; i++){ 
    cout << "Write a number: ";
    cin >> v[i];
    }

    //converts negative numbers to zero
    for (int& c : v) {
        if (c < 0) c = 0;
        cout << c << endl;
    }
    
    return 0;
}