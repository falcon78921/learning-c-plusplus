#include <iostream>

using namespace std;

int main()
{
    int *p1, *p2, v1, v2;
    v1 = 0;
    p1 = &v1;
    *p1 = 42;
    cout << v1 << endl;
    cout << *p1 << endl;

    int *j1, *j2, k1, k2;
    k1 = 128;
    j1 = &k1;
    *j1 = 128;
    cout << k1 << endl;
    cout << *j1 << endl;
}