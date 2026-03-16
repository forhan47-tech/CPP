#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("example.txt"); // open for writing

    if (!out) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    out << "Hello, file stream!" << endl; // write  
    out.close(); // close file
}
