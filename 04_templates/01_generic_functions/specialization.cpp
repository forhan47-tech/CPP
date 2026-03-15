#include <iostream>
using namespace std;

template <typename T>
void print(T data) {
    cout << data << endl;
}

// Specialization for bool
template <>
void print<bool>(bool data) {
    cout << (data ? "True" : "False") << endl;
}

int main() {
    print(42);     
    print(true);   
}
