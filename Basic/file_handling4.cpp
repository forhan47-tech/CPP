#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");  // Open file for reading
    int num;

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "Reading numbers from file:" << endl;
    while (file >> num) {  // Reads unknown numbers until EOF
        cout << num << " ";
    }
    cout << endl;

    file.close();  // Close file

    return 0;
}

