/*
* Date: 30/05/2026
* Description:
* Read the sex and height. Calculate the ideal weight.
* Male: 72.7 * height - 58 | Female: 62.1 * height - 44.7
* Create a function for each case.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//function for male
float masc(float high) {
    return 72.7 * high - 58;
}

//function for female
float fem(float high) {
    return 62.1 * high - 44.7;
}

//main
int main() {
    string sex;
    float high;

    cout << "Write feminine or masculine: ";
    cin >> sex;
    cout << "What is yout height: ";
    cin >> high;

    // for masculine weight
    if (sex == "masculine") {
        cout << "Your ideal weight is: " << masc(high);
    }
    // for feminine weight
    else if (sex == "feminine") {
        cout << "Your ideal weight is: " << fem(high);
    }
    else {
        cout << "You didn't enter a valid gender.";
    }
    return 0;
}
