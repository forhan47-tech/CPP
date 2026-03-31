#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40, 50};

    cout << "Forward traversal: ";
    for (size_t i = 0; i < d.size(); i++) {
        cout << d[i] << " ";   // access element by index
    }
    return 0;
}
