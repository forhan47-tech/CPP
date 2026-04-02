#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Reverse traversal: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";   // access element by index backwards
    }
    return 0;
}
