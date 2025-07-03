#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();              // Output: Hello!
    greet("NAIMUDDIN");   // Output: Hello, NAIMUDDIN!
    return 0;
}
