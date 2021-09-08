// Write functions that will do the following:
// --> Get a positive integer value from the user and return that value.
// --> Calculate the area of a circle based on a radius.
// --> Calculate the volume of a sphere based on a radius.

#include <iostream>
#include <string>
#include "MyMathFunctions.h"

using namespace std;

int main() {
    double circleArea = areaOfCircle(5); 
    cout << circleArea << endl;
    double sphereVol = volOfSphere(5);
    cout << sphereVol << endl;
    return 0;
}