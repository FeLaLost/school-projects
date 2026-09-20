/*
* Date: 01/05/2026
* Description:
* Read the number of people and their heights.
* Calculate and display the average height of all the people.
*/

#include <iostream>
using namespace std;

int main() {
    int people;
    float height, sum = 0.0f;

    cout << "Number of people ";
    cin >> people;

       //calculate the average height
       for (int i = 0; i < people; i++) {
        cout << "Person's height " << i + 1 << ": ";
        cin >> height;
        sum += height;
    }

    cout << "Average height: " << sum / people << endl;
 
    return 0;
}
