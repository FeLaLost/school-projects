/*
* Date: 01/06/2026
* Description:
* Read 20 letters into an array. Count the vowels (a, e, i, o, u),
* store the counts in a 5-element array, and display them.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20;
    vector<char> v1(n);
    vector<int> v2(5);

    // read the letters
    for (int i = 0; i < n; i++){
        cout << "Write a letter: ";
        cin >> v1[i];
    }

    for (int i = 0; i < 5; i++) v2[i] = 0;

    // add one more if there is a vowel.
    for (char& c : v1) {
        switch(c) {
            case 'a': v2[0]++; break;
            case 'e': v2[1]++; break;
            case 'i': v2[2]++; break;
            case 'o': v2[3]++; break;
            case 'u': v2[4]++; break;
        }
    }

    string vowels = "aeiou";

    //show the number of times each vowel appears
    for (int i = 0; i < 5; i++) {
        cout << vowels[i] << ": " << v2[i] << endl;
    }

    return 0;
}