#include <iostream>

using namespace std;

int main() {
    int r = 525;
    int s = 530;
    // Create a pointer of type int. Reference s's memory location
    int *p = &s;
    // Print out r's memory location
    cout << &r << endl;
    // Print out s's memory location
    cout << &s << endl;
    // Reference the pointer p and deference the memory address for value
    cout << *p << endl;
    cout << *p + 22 << endl;
}