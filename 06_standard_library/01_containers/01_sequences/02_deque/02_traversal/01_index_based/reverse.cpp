#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40, 50};

    cout << "Reverse traversal: ";
    for (int i = d.size() - 1; i >= 0; i--) {
        cout << d[i] << " ";   // access element by index backwards
    }
    return 0;
}
