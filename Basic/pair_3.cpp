#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1(1, "Apple"), p2(1, "Apple"), p3(2, "Banana");

    cout << boolalpha;  // Print `true`/`false` instead of `1`/`0`
    cout << "p1 == p2: " << (p1 == p2) << endl;  // Output: true
    cout << "p1 != p3: " << (p1 != p3) << endl;  // Output: true
    cout << "p1 < p3: " << (p1 < p3) << endl;    // Output: true
    cout << "p1 > p3: " << (p1 > p3) << endl;    // Output: false

    return 0;
}

