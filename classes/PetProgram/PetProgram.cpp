/**
 * Write a program that models a virtual pet. We will assume the pet
 * will have a weight and can be in a state of being hungry or not hungry.
 * The pet can be fed which will in turn effect the pet's hunger state and
 * according to the following:
 * 
 * 1.) If the food weight is greater than or equal to one half of the pet's
 * weight, the pet will not be hungry, otherwise it will be hungry.
 * 
 * 2.) The weight added to the pet will be one quarter of the food weight.
**/

#include <iostream>
#include "Pet.h"

using namespace std;

int main() {
    Pet Bob(150, false);
    Bob.feedPet(25);

    Pet Sam;
    Sam.feedPet(10);

    cout << "Bob weighs " << Bob.getWeight() << endl;
    cout << "Sam weighs " << Sam.getWeight() << endl;

    if (Bob.getHungry()) {
        cout << "Bob is hungry." << endl;
    } else {
        cout << "Bob is not hungry." << endl;
    }

    return 0;
}