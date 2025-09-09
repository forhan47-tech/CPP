#include <iostream>
using namespace std;

// Generic type
template <typename T>
void show(T val) {
    cout << "Generic: " << val << endl;
}

// Specialization for char
template <>
void show<char>(char val) {
    cout << "Character: '" << val << "'" << endl;
}

int main() {
    show(42);     
    show('A');   
    return 0;
}
