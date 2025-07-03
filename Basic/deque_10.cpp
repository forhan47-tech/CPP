#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    dq.clear();  // Removes all elements

    cout << "Deque size after clear: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
