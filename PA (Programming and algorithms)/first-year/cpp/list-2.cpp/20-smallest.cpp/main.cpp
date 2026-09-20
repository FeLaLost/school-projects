/*
* Date: 01/06/2026
* Description:
* Read 10 numbers into an array. Display the third-smallest value.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<int> v(n);

    // read all the numbers
    for (int i = 0; i < n; i++){
        cout << "Write a number: ";
        cin >> v[i];
    }

    //sort the numbers
    sort(v.begin(), v.end());

    //shows the third-smallest number (number 2 in the array)
    cout << "The third-smallest number is: " << v[2];

    return 0;
}