#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<string> dq = {"Alice", "Bob", "Charlie"};

    cout << "Range-based traversal: ";
    for (auto &n : dq) {
        cout << n << " ";
    }
}
