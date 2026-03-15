#include <iostream>
#include <string>
using namespace std;

void printString(const string &s) { // safe, efficient
    cout << "String: " << s << endl;
}

int main() {
    string text = "Hello World";
    printString(text); // cannot modify inside function
}
