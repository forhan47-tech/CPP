#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName; 
    
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;  // Reading string input

    cout << "Full Name: " << firstName << " " << lastName << endl;
    return 0;
}

