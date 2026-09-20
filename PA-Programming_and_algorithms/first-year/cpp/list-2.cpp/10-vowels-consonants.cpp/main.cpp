/*
* Date: 01/06/2026
* Description:
* Read a full name. Display the number of vowels and consonants.
* Create separate functions for each count.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//function for the vowels
int vowel(string word) {
    int sum = 0;

    // add one more if it's a vowel.
    for (char c : word) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') sum++;
    }
    return sum;
}

// function for the consonants
int consonant(string word) {
    int sum = 0;

    // if its not a vowel it adds one more
    for (char c : word) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') continue;
        else sum++;
    }
    return sum;
}

//main
int main() {
    string word;

    cout << "Write your name: ";
    cin >> word;

    //shows the number of vowels and consonants
    cout << "The number of vowels is: " << vowel(word) << endl;

    cout << "The number of consonants is: " << consonant(word);

    return 0;
}