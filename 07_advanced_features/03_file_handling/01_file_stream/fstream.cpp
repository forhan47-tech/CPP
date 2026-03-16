#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::app); // read + write

    if (!file) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    file << "Appending new data..." << endl; // write
    file.seekg(0); // move to beginning

    string line;
    while (getline(file, line)) { // read
        cout << line << endl;
    }

    file.close(); // close file
}
