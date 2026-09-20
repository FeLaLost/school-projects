/*
* Date: 30/05/2026
* Description:
* Read two integers and calculate addition, subtraction, multiplication, and division.
* Create a function for each operation.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//function for the sum
int sum(int num1, int num2) { return num1 + num2; }

//function for the subtraction
int sub(int num1, int num2) { return num1 - num2; }

//function for the multiplication
int multi(int num1, int num2) { return num1 * num2; }

//function for the division
float divi(int num1, int num2) { return (float)num1 / num2; }

//main
int main() {
    char choice;
    int num1, num2;

    cout << " Calculator " << endl;
    cout << "choice [+] [-] [*] [/]" << endl;
    cin >> choice;

    cout << "Choose two numbers: ";
    cin >> num1 >> num2; 

    // displays the equation based on the user's choice
    if (choice == '+') cout << sum(num1, num2);
    else if (choice == '-') cout << sub(num1, num2);
    else if (choice == '*') cout << multi(num1, num2);
    else if (choice == '/') cout << divi(num1, num2);
    else cout << "invalid, try again. ";
    
    return 0;
}