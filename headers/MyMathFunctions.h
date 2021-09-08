#ifndef MYMATHFUNCTIONS_H_
#define MYMATHFUNCTIONS_H_

#include <cmath>

const double pi = 3.1459;

double areaOfCircle(int radius);
double areaOfSphere(int radius);

double areaOfCircle(int radius) {
    // Calculate the area of a circle based on the radius provided
    return pi * pow(radius, 2);
}

double volOfSphere(int radius) {
    // Calculate the volume of a sphere based on the radius provided
    return 4/3.0 * pi * pow(radius, 3);
}

#endif /* MYMATHFUNCTIONS_H_ */