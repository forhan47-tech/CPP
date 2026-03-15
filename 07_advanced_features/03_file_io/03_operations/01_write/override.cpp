#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("example.txt");  

    if (!out) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    out << "Hello, File Handling!" << endl; // write
    out << "This is a new line." << endl;

    out.close();   
}
