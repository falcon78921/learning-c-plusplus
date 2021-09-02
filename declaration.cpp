// Write functions that will do the following:
// --> Get a positive integer value from the user and return that value.
// --> Calculate the area of a circle based on a radius.
// --> Calculate the volume of a sphere based on a radius.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double pi = 3.1459;

// Declaring functions before invoking them via main()
int getUserValue(int value);
double areaOfCircle(int radius);
double volOfSphere(int radius);

int main() {
    double circleArea = areaOfCircle(5);
    cout << circleArea << endl;
    double sphereVol = volOfSphere(5);
    cout << sphereVol << endl;
    return 0;
}

int getUserValue(int value) {
    // Verify that the provided integer is positive
    do {
        cout << "What is the integer you want returned?" << endl;
        cin >> value;
    } while (value <= 0);
    
    return value;
}

double areaOfCircle(int radius) {
    // Calculate the area of a circle based on the radius provided
    return pi * pow(radius, 2);
}

double volOfSphere(int radius) {
    // Calculate the volume of a sphere based on the radius provided
    return 4/3.0 * pi * pow(radius, 3);
}