#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    s.reserve(100);               // Pre-allocate memory
    cout << "Capacity after reserve: " << s.capacity() << endl;

    s = "Optimizing memory usage";
    cout << "Capacity before shrink_to_fit: " << s.capacity() << endl;

    s.shrink_to_fit();            // Reduce unused capacity
    cout << "Capacity after shrink_to_fit: " << s.capacity() << endl;

    return 0;
}