/* This program requires the student to write 3 functions described in
 * Program project 4 (Page 535) and Program Project 6 (Page 536).
 * The student also need to add a print function to print out an array.
 * The student may watch video notes on MyProgrammingLab to get the idea
 * on how to write the main function and three of these four functions
 *
 * Author: falcon78921
 * Version: 9/5/21
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

void reverse(char *front, char *rear);
// Precondition: The front and rear are pointing to the front
//               and rear of a C-string, respectively
// Postcondition: The C-string is reversed

string *addEntry(string *dynamicArray, int &size, string newEntry);
// Precondition: dynamicArray points to a array of strings with given size,
//               newEntry is a string
// Postcondition: A new dynamic array is created, which is one larger than
//                dynamicArray. All elements from dynamicArray are copied to
//                new array, the new entry is added to new array, the size
//                is increased, the dynamicArray is deleted, new dynamic
//                array is returned.

string *deleteEntry(string *dynamicArray, int &size, string entryToDelete);
// Precondition: dynamicArray point to a array of strings with give size,
//               newEntry is a string
// Postcondition: The function should search dynamicArray for entryToDelete.
//                If not found, the request should be ignored and the
//                unmodified dynamicArray returned. If found, create a new
//                dynamic array one element smaller than dynamicArray. Copy
//                all element except entryToDelete into the new array, delete
//                dynamicArray, decrement size, and return the new dynamic
//                array

void print(const string *dynamicArray, int size);
// Precondition: dynamicArray point to a array of strings with give size,
// Postcondition: The elements in dynamic array will be print out. One
//                element per line forllowed by its index

int main() {
    // write code to test reverse function.
    // make sure that you test it on at least two strings
    // one string has even length, another string has odd length

    // String with even amount of elements
    char strEven[] = "Joey";

    // String with odd amount of elements
    char strOdd[] = "Melissa";

    // Invoke reverse() for strEven
    reverse(strEven, strEven + strlen(strEven) - 1);

    // Invoke reverse() for strOdd
    reverse(strOdd, strOdd + strlen(strOdd) - 1);

    // Output reverse() results for strEven and strOdd
    cout << strEven << endl;
    cout << strOdd << endl;
    cout << "\n";

    // write code to test add entry and delete entry function
    // you may watch video notes to get idea for this part

    // Create a dynamic array of 5 strings
    string *fiveStrings;
    fiveStrings = new string[5];

    // Create an array to populate dynamic array
    string names[5] = {"Peter", "Patty", "Pete", "Pierre", "Percy"};

    // Populate dynamic array with names from names[]
    for (int n = 0; n < 5; n++) {
        fiveStrings[n] = names[n];
    }

    // Define variable for array length
    int arrLength = 5;

    // Invoke addEntry()
    string *addEntryOutput = addEntry(fiveStrings, arrLength, "Harold");
    print(addEntryOutput, 6);
    cout << "\n";

    // Invoke deleteEntry() with match
    string *deleteEntryMatch = deleteEntry(fiveStrings, arrLength, "Pierre");
    print(deleteEntryMatch, 4);

    // Invoke deleteEntry() without match
    string *deleteEntryWithoutMatch = deleteEntry(fiveStrings, arrLength, "Hannah");
    print(deleteEntryWithoutMatch, 5);

    // Remove fiveStrings[] from memory
    // See: https://www.cplusplus.com/doc/tutorial/dynamic/
    delete []fiveStrings;

	return 0;
}

void reverse(char *front, char *rear) {
    // Set char variable for focus
    char focus;

    // See: https://youtu.be/ZwWSO6303CQ?t=337
    while (front < rear) {
        focus = *front;
        *front = *rear;
        *rear = focus;
        front++; // *front + 1
        rear--; // *rear - 1
    }
}

string *addEntry(string *dynamicArray, int &size, string newEntry) {
    // Define a length that is 1 element larger than input
    int l = size + 1;

    // Define a newDynamicArray[]
    string *newDynamicArray;
    newDynamicArray = new string[l];

    // Populate new elements into newDynamicArray[]
    for (int n = 0; n < size; n++) {
        newDynamicArray[n] = dynamicArray[n];
    }

    // Add new entry to end of newDynamicArray[]
    int placement = l - 1;
    newDynamicArray[placement] = newEntry;

    return newDynamicArray;
}

string *deleteEntry(string *dynamicArray, int &size, string entryToDelete) {
    // Check dynamicArray[] for entryToDelete
    for (int n = 0; n < size; n++) {
        string name = dynamicArray[n];
        if (name == entryToDelete) {
            // Create a newDynamicArray[]
            string *newDynamicArray;
            int newSize = size - 1;
            newDynamicArray = new string[newSize];
            // Start moving elements into newDynamicArray[]
            for (int o = 0; o < newSize; o++) {
                string appendName = dynamicArray[o];
                if (appendName != entryToDelete) {
                    newDynamicArray[o] = dynamicArray[o];
                } else {
                    continue;
                }
            }
            return newDynamicArray;
        }
    }
    return dynamicArray;
}

void print(const string *dynamicArray, int size) {
    // Iterate over array passed in and output values
    for (int e = 0; e < size; e++) {
        cout << dynamicArray[e] << endl;
    }
}
