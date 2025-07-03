#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName;  // Using std::string for safer input handling
    
    cout << "Enter your first and last name: ";
    cin >> firstName >> lastName;  // Reading string input

    // Output with a space
    cout << "Full Name: " << firstName << " " << lastName << endl;

    return 0;
}

