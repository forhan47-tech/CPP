#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40};

    cout << "Backward traversal: ";
    for (int i = d.size() - 1; i >= 0; i--) {
        cout << d[i] << " ";
    }
}
