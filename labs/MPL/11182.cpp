#include <iostream>

using namespace std;

class Averager {
    public:
        Averager() {
            sum = 0;
            count = 0;
        }
        int getSum() {
            return sum;
        }
        void add(int value) {
            sum = sum + value;
            count++;
        }
        int getCount() {
            return count;
        }
        double getAverage() {
            cout << sum << endl;
            cout << count << endl;
            return double(sum) / double(count);
        }

    private:
        int sum;
        int count;
};

int main() {
    Averager object;
    object.add(5);
    object.add(10);
    double result = object.getAverage();
    cout << result << endl;
}