#include <iostream>
#include <string>
using namespace std;

void changeString(string *s) {
    *s = "Modified"; // dereference pointer
}

int main() {
    string text = "Hello";
    changeString(&text); // pass address
    cout << "Outside function: " << text << endl;
}
