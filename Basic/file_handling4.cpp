#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream File("input.txt"); // Open file for reading
    char ch;

    if (!File) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit if file cannot be opened
    }

    // Read and display the first character
    File.get(ch); // Read first character
    cout << "First character: " << ch << endl;

    while (File.get(ch)) { // Read character by character
        cout << ch; // Output each character
    }

    File.close(); // Close the file

    return 0;
}

