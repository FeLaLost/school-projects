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
    cin >> sex >> high;
    if (sex == "Masculino") {
        cout << masc(high);
    }
    else if (sex == "Feminino") {
        cout << fem(high);
    }
    else {
        cout << "write Feminino or Masculino";
    }
    return 0;
}
