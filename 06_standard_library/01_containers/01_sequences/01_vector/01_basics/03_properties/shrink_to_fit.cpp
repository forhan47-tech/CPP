#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10, 1);

    cout << "Before shrink -> Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;

    v.shrink_to_fit();

    cout << "After shrink -> Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;
    return 0;
}
