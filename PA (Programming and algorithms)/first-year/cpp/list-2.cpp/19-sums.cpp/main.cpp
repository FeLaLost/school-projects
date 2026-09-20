/*
* Date: 01/06/2026
* Description:
* Read 10 numbers. Separate even and odd numbers into distinct arrays.
* Sort both arrays. Sum the elements and store the results in a third array.
* Display all arrays.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vEven, vOdd, vRes;
    int num;

    for (int i = 0; i < 10; i++) {
        cout << "Write a number: ";
        cin >> num;
        // put the number in its array
        if (num % 2 == 0) vEven.push_back(num);
        else vOdd.push_back(num);
    }

    //sort both arrays
    sort(vEven.begin(), vEven.end());
    sort(vOdd.begin(), vOdd.end());

    int sizeRes = min(vEven.size(), vOdd.size());

    //creates the third array to make the sum
    for (int i = 0; i < sizeRes; i++) {
        vRes.push_back(vEven[i] + vOdd[i]);
    }

    // shows all the even numbers sorted
    cout << "--- even numbers ---" << endl;
    for (int c : vEven) cout << c << endl;

    // shows all the odd numbers sorted 
    cout << "--- odd numbers ---" << endl;
    for (int c : vOdd) cout << c << endl;

    // shows the sum of the arrays
    cout << "--- sum ---" << endl;
    for (int c : vRes) cout << c << endl;

    return 0;
}