#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto multiply(T1 a, T2 b) {
    return a * b; // return type deduced
}

int main() {
    cout << multiply(3, 4.5) << endl;
}
