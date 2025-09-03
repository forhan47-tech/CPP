#include <iostream>
using namespace std;

namespace LibraryA {
    void display() { cout << "Library A Function\n"; }
}

namespace LibraryB {
    void display() { cout << "Library B Function\n"; }
}

int main() {
    LibraryA::display();
    LibraryB::display();
    
    return 0;
}

