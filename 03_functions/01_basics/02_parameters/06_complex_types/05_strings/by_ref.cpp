#include <iostream>
#include <string>
using namespace std;

void changeString(string &s) {
    s = "Modified"; // modifies original
}

int main() {
    string text = "Hello";
    changeString(text);
    cout << "Outside function: " << text << endl;
}
