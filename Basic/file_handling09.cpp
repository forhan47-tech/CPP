#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("output.txt", ios::in | ios::out | ios::app); // read + write

    if (file.is_open()) {
        file << "Appending new data!" << endl;
        
        file.seekg(0);  // Move back to start for reading

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}

