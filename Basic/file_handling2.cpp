#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("data.txt"); // Open file in read mode
    string line;
    
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read and display the first line
    getline(file, line);
    cout << line << endl;

    // Read and display content line by line
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}

