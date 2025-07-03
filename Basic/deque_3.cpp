#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40, 50};

    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
