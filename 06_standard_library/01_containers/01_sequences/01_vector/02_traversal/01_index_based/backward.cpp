#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    cout << "Backward traversal: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    return 0;
}
