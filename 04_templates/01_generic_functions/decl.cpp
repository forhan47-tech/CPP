#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;     // deduced as int
    cout << add(2.5, 3.1) << endl;   // deduced as double
}
