#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Forward traversal: ";
    for (const auto &x : v) {
        cout << x << " ";   // directly access each element
    }
    return 0;
}
