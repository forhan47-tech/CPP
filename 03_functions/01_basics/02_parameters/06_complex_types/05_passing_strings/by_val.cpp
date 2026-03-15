#include <iostream>
#include <string>
using namespace std;

void changeString(string s) {
    s = "Modified"; // modifies only the copy
    cout << "Inside function: " << s << endl;
}

int main() {
    string text = "Hello";
    changeString(text);
    cout << "Outside function: " << text << endl;
}
