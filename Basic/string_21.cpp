#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello";

    s.push_back('!');               // Add a character at the end
    cout << "After push_back: " << s << endl;

    s.pop_back();                   // Remove the last character
    cout << "After pop_back: " << s << endl;

    const char* raw = s.data();     // Get pointer to internal char array
    cout << "Using data(): " << raw << endl;

    return 0;
}
