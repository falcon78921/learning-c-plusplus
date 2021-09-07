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

#ifndef PET_H_
#define PET_H_

class Pet {
    public:
        // Constructors (Member Functions)
        Pet(int weight, bool hungry);
        Pet();

        // Member Functions
        void feedPet(int amountOfFood);
        bool getHungry();
        double getWeight();

    private:
        // Data Members
        double weight;
        bool hungry;
};

#endif /* PET_H_ */