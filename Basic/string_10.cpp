#include<iostream>
#include<string>  // Needed for string
using namespace std;

int main() {
    string names[3];  // Array of 3 strings

    cout << "Enter 3 full names:" << endl;

    for (int i = 0; i < 3; i++) {
        getline(cin, names[i]);  // Read full line into a string
    }

    cout << "The names are:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;  // Output each name
    }

    return 0;
}

