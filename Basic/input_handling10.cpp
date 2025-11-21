#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter lines (Ctrl+D to stop):\n";
    while (getline(cin, line)) {   // reads full line
        cout << "Read: " << line << endl;
    }
    return 0;
}
