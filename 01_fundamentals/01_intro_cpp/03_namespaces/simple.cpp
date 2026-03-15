#include <iostream>
using namespace std;

namespace Project {
    int val = 42;

    void greet() { 
        cout << "Hello from Project!\n"; 
    }
}

int main() {
    cout << Project::val << "\n";   // Access with scope resolution
    Project::greet();
}
