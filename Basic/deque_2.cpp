#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40, 50};

    for (size_t i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    return 0;
}
