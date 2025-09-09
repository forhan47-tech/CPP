#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "World";

    text.insert(0, "Hello, ");  // Insert at beginning
    cout << "Inserted: " << text << endl;

    text.erase(5, 2);  // Remove ", "
    cout << "After Erase: " << text << endl;

    int pos = 4;
    if (pos < text.size()) {
        cout << "Substring: " << text.substr(pos, 5) << endl; // Substring
    } 
    return 0;
}


