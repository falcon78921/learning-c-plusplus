#include <iostream>
#include <string>

using namespace std;

int main() {
    int cost = 0 // Compile issue
    cout << "Enter a cost: " << endl;
    cin >> cost;

    int savings = 0;
    cout << "Enter a savings amount: " << endl;
    cin >> savings;

    if (cost > savings) {
        cout << "You don't have enough money to purchase.";
    } else {
        cout << "You have enough money to purchase.";
    }
}