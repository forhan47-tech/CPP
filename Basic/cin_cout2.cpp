#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age; // Reads the integer

    cin.ignore(); // Skips the newline character left in the input buffer

    cout << "Enter your name: ";
    getline(cin, name); // Now it works correctly
    cout << "Name: " << name << endl;

    return 0;
}

