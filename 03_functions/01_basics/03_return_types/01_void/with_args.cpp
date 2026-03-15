#include <iostream>
using namespace std;

void greet(string name) { // parameter added, no return
    cout << "Hello, " << name << endl;
}

int main() {
    greet("Alice");
    greet("Bob");
}
