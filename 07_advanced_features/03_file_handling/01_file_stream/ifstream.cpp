#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("example.txt"); // open for reading

    if (!in) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    string line;
    while (getline(in, line)) { // read
        cout << line << endl;
    }

    in.close(); // close file
}
