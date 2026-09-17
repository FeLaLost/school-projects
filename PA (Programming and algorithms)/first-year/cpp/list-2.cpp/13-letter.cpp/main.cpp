/*
* Date: 01/06/2026
* Description:
* Read 20 letters into an array. Read a letter and count how many times it appears.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20, sum = 0;
    char lettercount;
    vector<char> letter(n);

    cout << "Write the letter you want to know the count for: ";
    cin >> lettercount;

    for (int i = 0; i < n; i++){
        cout << "Write a letter: " ; 
        cin >> letter[i];
    }

    for (char c : letter) {
        if (c == lettercount) sum++;
    }


    cout << "Number of times your letter appears: " << sum;

    return 0;
}