#include <iostream>

using namespace std;

int main() {
    
struct Money {
    int dollars, cents;
};

Money revenue;

revenue.cents = 10;
revenue.dollars = 5;

cout << "Total revenue is " << revenue.dollars << "." << revenue.cents << endl;

return 0;

}