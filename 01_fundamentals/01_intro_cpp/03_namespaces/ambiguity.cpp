#include <iostream>
using namespace std;

namespace A {
    void print() { 
        cout << "From A\n"; 
    }
}

namespace B {
    void print() { 
        cout << "From B\n"; 
    }
}

int main() {
    A::print();  // Must qualify to avoid ambiguity
    B::print();
    return 0;
}
