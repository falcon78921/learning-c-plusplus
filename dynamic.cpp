#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    *p = 5;
    delete p;
    p = new int(10);
    cout << *p << endl;
    cout << p << endl;
}