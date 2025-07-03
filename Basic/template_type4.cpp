#include <iostream>
using namespace std;

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
    show(42);     // Generic: 42
    show('A');    // Character: 'A'
    return 0;
}
