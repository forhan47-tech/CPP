#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";

    s.append(" World");   // using append()
    cout << s << endl; 

    s += "!!!";             // using operator+=
    cout << s << endl; 

    s = s + " Everyone";    // using operator+
    cout << s << endl;
}
