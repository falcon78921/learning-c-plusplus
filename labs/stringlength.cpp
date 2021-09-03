#include <iostream>
#include <string>

using namespace std;

string max(string str1, string str2) {
    // Check sizes of str1 and str2
    int str1Length = str1.size();
    int str2Length = str2.size();

    // Return longest string
    if (str1Length > str2Length) {
        return str1;
    } else {
        return str2;
    }
}

int main() {
    // Invoke max() and save result into compare
    string compare = max("Jean", "Harold");
    cout << compare << endl;
}