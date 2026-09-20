/*
* Date: 01/06/2026
* Description:
* Read 10 names into an array. Sort them in descending order and display them in ascending order.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<string> v(n);

    //read the names
    for (int i = 0; i < n; i++){
    cout << "Write a name: ";
    cin >> v[i];
    //sort them in increasing order
    sort(v.begin(), v.end());
    //sort them in decreasing order
    reverse(v.begin(), v.end());
    }

    cout << "The names in ascending order: " << endl;

    // show the names in ascending order
    for (int i = n-1; i >= 0; i--) {
        cout << v[i] << endl;
    }

    return 0;
}