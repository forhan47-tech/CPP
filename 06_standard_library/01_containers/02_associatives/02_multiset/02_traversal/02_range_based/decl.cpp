#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {30, 10, 20, 20};

    cout << "Forward traversal: ";
    for (auto &x : ms) {
        cout << x << " ";  
    }
}
