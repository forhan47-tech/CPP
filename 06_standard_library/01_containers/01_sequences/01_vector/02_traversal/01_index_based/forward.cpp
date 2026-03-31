#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Forward traversal: ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";   // access element by index
    }
    return 0;
}
