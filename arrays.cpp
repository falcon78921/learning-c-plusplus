#include <string>
#include <iostream>

using namespace std;

int main() {
    string names[3] = {"Joey", "Corey", "Sid"};
    for (int n = 0; n < 3; n++) {
        cout << names[n] << endl;
    }

    int numbers[100];
    for (int i = 0; i < 100; i++) {
        numbers[i] = i;
        cout << i << endl;
    }

    int number = 595;
    int *anotherNumber = &number;
    cout << &number << endl;
    cout << *anotherNumber << endl;
}