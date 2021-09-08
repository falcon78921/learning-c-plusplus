#include <iostream>
#include <vector>

using namespace std;

void outputVector(vector <int> years) {
    for (int y = 0; y < years.size(); y++) {
        cout << years[y] << endl;
    }
}

int main() {
    vector <int> years(3);
    years[0] = 1993;
    years[1] = 1994;
    years[2] = 1995;

    years.push_back(1990);

    cout << years.front() << endl;
    cout << years.back() << endl;
    cout << years.at(1) << endl;

    outputVector(years);
}