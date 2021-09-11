#include <iostream>

using namespace std;

class Counter {
    public:
        Counter() {
            counter = 0;
        }
        void increment() {
            counter++;
        }
        int getValue() {
            return counter;
        }
    private:
        int counter;
};

int main() {
    Counter number;
    number.increment();
    int output = number.getValue();
    cout << output << endl;
    return 0;
}