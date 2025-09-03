#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("output.txt"); // Open file for writing

    string line = "This is a sample line.";
    int number = 42;

    if (file.is_open()) {
        file << "Hello, World!\n"; // Write multiple lines
        file << "File handling in C++.\n";

        file << line << "\n"; // Write a string variable
        file << "The answer is: " << number << "\n"; // Write an integer variable

        file.close(); // Close file
        cout << "Data written successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}

