#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};

    cout << "Range-based traversal: ";
    for (int x : vec) {
        cout << x << " ";
    }
    return 0;
}
