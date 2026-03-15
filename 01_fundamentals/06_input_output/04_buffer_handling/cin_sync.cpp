#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter age: ";
    cin >> age;

    cin.sync(); // clears leftover characters in buffer

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Age: " << age << ", Name: " << name << endl;
}
