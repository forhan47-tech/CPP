#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10, 1); // 10 elements
    cout << "Capacity before shrink: " << v.capacity() << endl;

    v.resize(3); // reduce size to 3
    v.shrink_to_fit(); // request capacity reduction
    cout << "Capacity after shrink: " << v.capacity() << endl;
}
