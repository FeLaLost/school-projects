/*
* Date: 31/05/226
* Description:
* Read 5 numbers. Check whether they are in ascending order,
* in descending order, or unordered.
* Create a function for this analysis.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void order() {
    vector<int> num(5);

    bool asc = true, desc = true;

    //loop for the numbers
    for (int i = 0; i < 5; i++){
        cout << "Write a number: ";
        cin >> num[i];
    }

    // check whether the list is sorted or not.
    for (int i = 0; i < 4; i++) {
        if (num[i] > num[i+1]) asc = false;
        else desc = false;
    }

    //show the result
    if (asc) cout << "ascending";
    else if (desc) cout << "descending";
    else cout << "unordered";
}

//main
int main() {
    order();
    return 0;
}