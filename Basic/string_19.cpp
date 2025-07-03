#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Hello, World! Hello again!";
    size_t pos = s.rfind("Hello");

    if (pos != string::npos) {
        cout << "Last occurrence of 'Hello' found at position: " << pos << endl;
    }

    return 0;
}