#include <iostream>
using namespace std;

void greet(string name = "Guest") { // default parameter
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice"); // uses provided value
    greet();        // uses default "Guest"
}
