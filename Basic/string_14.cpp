#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Welcome to C++! C++ code have fun!";
    
    // First occurrence
    size_t firstPos = text.find("C++");
    if (firstPos != string::npos) {
        cout << "First occurrence of 'C++' at position: " << firstPos << endl;
    }

    // Last occurrence
    size_t lastPos = text.rfind("C++");
    if (lastPos != string::npos) {
        cout << "Last occurrence of 'C++' at position: " << lastPos << endl;
    }
    return 0;
}
