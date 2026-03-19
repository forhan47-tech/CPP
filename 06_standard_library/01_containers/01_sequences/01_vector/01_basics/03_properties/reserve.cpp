#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Initial capacity: " << v.capacity() << endl;

    v.reserve(10);  // reserve space for 10 elements
    cout << "Capacity after reserve(10): " << v.capacity() << endl;
    return 0;
}
