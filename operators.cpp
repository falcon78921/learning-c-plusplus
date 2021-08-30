// A red seed will grow into a flower when planted
// in soil temperatures above 75 degrees, otherwise
// it will grow into a mushroom. Assuming the temperature
// meets the conditions for growing a flower, planting the red 
// seed in wet soil will produce a sunflower and planting the red
// seed in dry soil will produce a dandelion. A blue seed will
// grow into a flower when planted in soil temperatures ranging
// from 60 to 70 degrees, otherwise it will grow into a mushroom.
// Assuming the temperature meets the conditions for growing a flower,
// planting the blue seed in wet soil will produce a dandelion and
// planting the blue seed in dry soil will produce a sunflower. Write
// a program that will ask the user to input the seed color, the soil
// temperature, and whether or not the soil is wet or dry. 
// Finally, output what will grow.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare variables for user inputs
    string seedColor = "";
    int soilTemp = 0;

    // Prompt user for inputs
    cout << "What is the seed color?\n";
    cin >> seedColor;

    // Check for proper input for seedColor
    if (seedColor != "red" && seedColor != "blue") {
        cout << "Invalid seed color selected.";
        return 1;
    }

    cout << "What is the soil temperature?\n";
    cin >> soilTemp;

    // Logic based on user inputs
    if (seedColor == "red") {
        if (soilTemp > 75) {
            string soilHumidity = "";
            cout << "What is the soil humidity?\n";
            cin >> soilHumidity;

            // Check for proper input for soilHumidity
            if (soilHumidity != "wet" && soilHumidity != "dry") {
                cout << "Invalid soil moisture selected.";
                return 1;
            }

            if (soilHumidity == "dry") {
                cout << "It's a dandelion.\n";
            } else if (soilHumidity == "wet") {
                cout << "It's a sunflower.\n";
            }

        } else {
            cout << "It's a mushroom.\n";
        }
    } else if (seedColor == "blue") {
        if (soilTemp >= 60 && soilTemp <= 70) {
            string soilHumidity = "";
            cout << "What is the soil humidity?\n";
            cin >> soilHumidity;

            // Check for proper input for soilHumidity
            if (soilHumidity != "wet" && soilHumidity != "dry") {
                cout << "Invalid soil moisture selected.";
                return 1;
            }

            if (soilHumidity == "dry") {
                cout << "It's a sunflower.\n";
            } else if (soilHumidity == "wet") {
                cout << "It's a dandelion.\n";
            }
            
        } else {
            cout << "It's a mushroom.\n";
        }
    }
}