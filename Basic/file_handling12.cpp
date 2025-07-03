#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream src("example.txt", ios::binary); // Open source file in binary mode
    ofstream dest("copy_example.txt", ios::binary); // Open destination file

    if (src.is_open() && dest.is_open()) {
        dest << src.rdbuf(); // Copy file contents
        cout << "File copied successfully!\n";
    } else {
        cout << "Error opening files.\n";
    }

    return 0;
}

