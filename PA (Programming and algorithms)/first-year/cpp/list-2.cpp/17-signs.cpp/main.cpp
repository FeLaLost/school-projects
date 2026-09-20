/*
* Date: 01/06/2026
* Description:
* Read 10 numbers into an array. Create another array with the signs inverted.
* Display the sum of the positive values from both arrays.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10, sum1 = 0, sum2 = 0;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        //read the numbers
        cout << "Write a number: ";
        cin >> v1[i];
        //creates the second array with the signs inverted
        v2[i] = v1[i] * -1;
    }

    //sum all the positive numbers of both arrays
    for (int i = 0; i < n; i++) {
        if (v1[i] > 0) sum1 += v1[i];
        if (v2[i] > 0) sum2 += v2[i];
    }

    cout << "The sum of all the positive numbers in both arrays is: " << sum1 + sum2 << endl;

    return 0;
}