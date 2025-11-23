#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter text (Ctrl+D to stop):\n";
    while (cin.get(ch)) {   // reads one character at a time
        cout << "Read: " << ch << endl;
    }
    return 0;
}
