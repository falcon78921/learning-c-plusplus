#include <iostream>
#include <string>

using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!" << endl;
    }
    int outputValue(int number) {
        return value + number;
    }

    string outputString(string name) {
        return name;
    }

    void outputVar() {
        cout << value << endl;
    }

  private:
    int value = 555;
};

int main() {
    MyClass object;
    int value = object.outputValue(5);
    string name = object.outputString("Napoleon");
    cout << value << endl;
    cout << name << endl;
    // cout << object.value << endl; - Leads to variable being inaccessible
    object.outputVar();
}