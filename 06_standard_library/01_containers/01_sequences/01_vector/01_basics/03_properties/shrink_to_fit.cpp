#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v.reserve(20); // artificially increase capacity
    cout << "Capacity before shrink: " << v.capacity() << endl;
    v.shrink_to_fit(); // reduce capacity
    cout << "Capacity after shrink: " << v.capacity() << endl;
}
