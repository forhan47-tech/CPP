#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);  // Reads the entire line
    cout << "You entered: " << line << endl;
    return 0;
}

