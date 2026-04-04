#include <iostream>
using namespace std;

void userId(string name) { 
    cout << "Hello, " << name << endl; // parameter added, no return
}

int main() {
    userId("Alice");
    userId("Bob");
}
