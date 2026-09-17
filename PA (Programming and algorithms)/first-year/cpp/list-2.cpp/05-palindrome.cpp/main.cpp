/*
* Date: 30/05/2026
* Description:
* Read a word. Check if it is a palindrome.
* Create a function that returns true or false.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void palin() {
    string word;

    cout << "Write a word: ";
    cin >> word;

    // read the word to see if it is a palindrome
    string word2 = word;
    reverse(word2.begin(), word2.end());

    // compares the word to see if it is a palindrome
    if (word == word2) {
        cout << "The word is a palindrome";
    }
    else {
        cout << "The word is not a palindrome";
    }
}

// main
int main() {
    palin();
    return 0;
}