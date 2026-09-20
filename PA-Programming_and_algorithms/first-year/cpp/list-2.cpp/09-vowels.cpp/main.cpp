/*
* Date: 31/05/2026
* Description:
* Read a word. Replace all vowels with "*".
* Create a function to perform the replacement.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void substring() {
    string word;

    cout << "Write a word: ";
    cin >> word;

    //read the vowels and replace them with "*"
    for (char& c : word) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            c = '*';
        }
    }
    cout << word;
}

//main
int main() {
    substring();
    return 0;
}