#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    dq.clear();  // Removes all elements

    cout << "Deque size after clear: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    dq.shrink_to_fit(); // Reduces capacity to fit size
    cout << "Deque capacity after shrink_to_fit: " << dq.size() << endl;

    return 0;
}
