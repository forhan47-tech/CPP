#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();             // Uses default
    greet("NAIMUDDIN");  // Uses provided argument
    return 0;
}
