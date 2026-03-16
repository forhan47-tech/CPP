#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("example.txt", ios::app);  

    if (!out) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    out << "This line is appended..." << endl; // write

    out.close();
}
