#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i < 5; i++) {
        v.push_back(i);
    }

    cout << "Size: " << v.size() << endl;     
    cout << "Capacity: " << v.capacity() << endl; 
}
