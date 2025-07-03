#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    
    cout << "Enter text lines (empty line to stop):" << endl;

    while (getline(cin, line) && !line.empty()) {  // Stops when an empty line is entered
        cout << "You entered: " << line << endl;
    }

    cout << "Input ended." << endl;
    return 0;
}

