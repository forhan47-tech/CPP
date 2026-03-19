#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);

    cout << "Size: " << v.size() << endl;       // number of elements
    cout << "Capacity: " << v.capacity() << endl; // allocated memory
    return 0;
}
