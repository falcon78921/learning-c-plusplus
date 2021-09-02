// Write a program that will ask the user to input a word that
// is at least 5 characters in length. Once a valid word has
// been inputted, ask the user to input a character. The program
// will then calculate the number of times this inputted
// character appears in the word and output the result.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Prompt the user to input a word that has a length of 5
    string word = "";

    do {
        cout << "Enter a word that has at least 5 characters:" << endl;
        cin >> word;
    } while (word.size() < 5);

    // Prompt the user to input a character
    char wordChar = '0';
    cout << "Enter a character that will be matched against " << word << ":" << endl;
    cin >> wordChar;

    int counter = 0;

    // Iterate over the specified word and get the character
    for (int i = 0; i < word.size(); i++) {
        char cr = word.at(i);
        
        if (wordChar == cr) {
            // Increment the counter by 1
            counter++;
        }
    }

    // Output the number of times the character was found
    cout << "The number of " << wordChar << "'s in the word " << word << " is: " << counter << endl;
}