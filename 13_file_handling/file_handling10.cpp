#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("output.txt"); // Open file for writing

    if (file.is_open()) {
        file << "Hello, World!\n"; 
        file << "File handling in C++.\n"; // Write multiple lines     
        file.close(); 
    }  
    return 0;
}

