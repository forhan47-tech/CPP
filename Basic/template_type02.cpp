#include <iostream>
using namespace std;

template <typename T, typename U>
T add(T a, U b) {
    return a + b;
}

int main() {
    cout << "add(3, 4): " << add(3, 4) << endl;           // int + int
    cout << "add(2.5, 4): " << add(2.5, 4) << endl;       // double + int
    return 0;
}
