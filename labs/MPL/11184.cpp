#include <iostream>

using namespace std;

class GasTank {
    public:
        GasTank() {
            amount = 0;
        }
        void addGas(double value) {
            amount = amount + value;
        }
        void useGas(double value) {
            amount = amount - value;
            if (amount < 0) {
                amount = 0;
            }
        }
        bool isEmpty() {
            if (amount < 0.1) {
                return true;
            } else {
                return false;
            }
        }
        double getGasLevel() {
            return amount;
        }
        
    private:
        double amount;
};