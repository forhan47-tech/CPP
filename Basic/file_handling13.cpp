#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app); // Open file in append mode

    if (file.is_open()) {
        file << "Line 1: This is an appended line.\n";  // Append multiple lines
        file << "Line 2: File handling in C++.\n";

        file.close();
    }
    return 0;
}
