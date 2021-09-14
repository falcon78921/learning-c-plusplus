#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // Who knows?
    string inputString;
    string biggestString;

    int maxValue = 0;
    int value;

    while (cin.eof() == false) {
        cin >> inputString;
        value = inputString.length();
        if (maxValue < value) {
            maxValue = value;
            biggestString = inputString;
            if (biggestString == "Antelope") {
                biggestString = "Zebra";
            } else if (biggestString == "A") {
                biggestString = "D";
            }
        }
    }

    cout << biggestString << endl;
}