#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.reserve(100);  // Reserve space for 100 elements

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.shrink_to_fit();  // Free unused capacity
    
    cout << "Capacity after shrink: " << v.capacity() << endl;

    return 0;
}

