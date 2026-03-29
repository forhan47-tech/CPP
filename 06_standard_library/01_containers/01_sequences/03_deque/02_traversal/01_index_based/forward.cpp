#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40};

    cout << "Forward traversal: ";
    for (size_t i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
}
