#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("lines.txt"); 

    if (!file.is_open()) {
        return 1;
    }

    string line;
    for (int i = 1; i <= 5; ++i) {
        getline(cin, line);     
        file << line << '\n';    // Write the line to the file
    }
    
    file.close();
    return 0;
}
