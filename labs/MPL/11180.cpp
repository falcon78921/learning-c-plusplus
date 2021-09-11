#include <iostream>

using namespace std;

class Accumulator {
	public:
		Accumulator() {
			sum = 0;
		}
		int getSum() {
			return sum;
		}
		void add(int value) {
			sum = sum + value;
		}
	private:
		int sum;
};

int main() {
    Accumulator object;
    object.add(5);
    int value = object.getSum();
    cout << value << endl;
}