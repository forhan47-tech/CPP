#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age; 

    cin.ignore(); // Skips the newline character

    cout << "Enter your name: ";
    getline(cin, name); 
    cout << "Name: " << name << endl;
    return 0;
}

