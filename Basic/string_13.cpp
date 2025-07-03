#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello";
    text.append(", World!");  // Append another string

    cout << "Length: " << text.length() << endl;
    cout << "Text: " << text << endl;

    text.clear();
    cout << "Is Empty? " << (text.empty() ? "Yes" : "No") << endl; 
    cout << "Length after clear: " << text.size() << endl;

    return 0;
}

