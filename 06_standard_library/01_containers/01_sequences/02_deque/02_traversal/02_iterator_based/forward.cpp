#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40};

    cout << "Forward traversal: ";
    for (auto it = d.begin(); it != d.end(); ++it) {
        cout << *it << " ";   // dereference iterator
    }
    return 0;
}
