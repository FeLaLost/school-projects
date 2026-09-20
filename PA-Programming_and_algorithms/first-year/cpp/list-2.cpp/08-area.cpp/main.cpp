/*
* Date: 31/05/2026
* Description:
* Read the radii of 5 circles. Calculate and display the sum of the areas.
* Create a function to calculate the area of ​​a circle.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//function to calculate the circle area
float area(float r) {
    return 3.1415926 * (r * r);
}

//main
int main() {
    vector<float> r(5);
    float sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Write the radius of the circle: ";
        cin >> r[i];

        //sum of the 5 areas
        sum += area(r[i]);
    }

    cout << "Sum of the 5 areas: " << sum << endl;

    return 0;
}