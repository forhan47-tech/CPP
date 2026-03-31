#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.reserve(10); // reserve capacity for 10 elements
    cout << "Capacity after reserve: " << v.capacity() << endl;
}
