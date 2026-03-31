#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40, 50};

    cout << "Forward traversal: ";
    for (auto &x : dq) {
        cout << x << " ";   // directly access each element
    }
    return 0;
}
