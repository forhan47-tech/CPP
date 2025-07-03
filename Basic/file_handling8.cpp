#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("data.txt", ios::app); // Open file in append mode
    
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Append multiple lines
    file << "Line 1: This is an appended line.\n";
    file << "Line 2: File handling in C++.\n";
    file << "Line 3: Adding data without overwriting!\n";

    // Close file
    file.close();

    cout << "Lines appended successfully!" << endl;

    return 0;
}
