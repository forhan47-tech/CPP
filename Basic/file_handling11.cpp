#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("data.txt");
    
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file << "Name: " << "Alice" << ", Age: " << 25 << '\n'; // Write formatted text
    file << "Hello, World!" << endl;

    file.close();
    return 0;
}
