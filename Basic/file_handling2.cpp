#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("output.txt"); // Open file for writing

    if (file.is_open()) {
        file << "Hello, World!\n"; // Write data
        file << "File handling in C++.\n";
        file.close(); // Close file
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}

