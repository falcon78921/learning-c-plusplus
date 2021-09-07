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

#include "Pet.h"

Pet::Pet(int w, bool hun):weight(w), hungry(hun) {
}

Pet::Pet():weight(100), hungry(true) {
}

void Pet::feedPet(int amt) {
    if (amt >= 0.5 * weight) {
        hungry = false;
    } else {
        hungry = true;
    }

    weight = weight + 0.25 * amt;

}

double Pet::getWeight() {
    return weight;
}

bool Pet::getHungry() {
    return hungry;
}