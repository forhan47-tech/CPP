#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q1, q2;

    // Initialize queues
    q1.push(1); q1.push(2); q1.push(3);
    q2.push(4); q2.push(5); q2.push(6);

    
    // Swap queues
    q1.swap(q2);

    cout << "\nAfter swapping:\n";
    cout << "Queue 1 front: " << q1.front() << "\n";
    cout << "Queue 2 front: " << q2.front() << "\n";

    return 0;
}

