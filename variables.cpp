#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable declarations
    string name = "";
    int age = 0;

    // Prompt for entering name
    cout << "Enter your name: \n";
    cin >> name;

    // Prompt for entering age
    cout << "Enter your age: \n";
    cin >> age;

    // Output final results
    cout << "Your name is: " << name << ".\nYour age is: " << age << ".";

    return 0;
}