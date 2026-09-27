/*
* Date: 01/06/2026
* Description:
* Read 10 names in an array. Sort them in descending order and display them in ascending order.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<string> v(n);


    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = n-1; i >= 0; i--) {
        cout << v[i] << endl;
    }
    
    return 0;
}