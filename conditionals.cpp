// Write a program that asks the user for a score between
// 0 and 100. Based on the inputted score and the table
// below, the program will output the appropriate message:
// 90 - 100 Awesome!
// 80 - 89 Well Done
// 70 - 79 Average
// 60 - 69 Bummer
// 0 - 59 Sad Times

#include <iostream>

using namespace std;

int main() {
    // Declare variables and prompt user for inputs
    int score = 0;
    cout << "What is the score between 0 and 100?" << endl;
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
        return 0;
    }

    if (score >= 90 && score <= 100) {
        cout << "Awesome!" << endl;
    } else if (score >= 80 && score <= 89) {
        cout << "Well Done" << endl;
    } else if (score >= 70 && score <= 79) {
        cout << "Average" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "Bummer" << endl;
    } else if (score >= 0 && score <= 59) {
        cout << "Sad Times" << endl;
    }

    return 0;
}