#include <iostream>
using namespace std;

int main() {
    auto x = 10; // compiler deduces x is int
    cout << "x: " << x << endl;
    return 0;
}
