#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Welcome to C++!";
    
    // Finding a substring
    size_t pos = text.find("C++");
    if (pos != string::npos) {
        cout << "Found 'C++' at position: " << pos << endl;
    }

    // Substring example
    cout << "Substring: " << text.substr(11, 10) << endl;

    return 0;
}

