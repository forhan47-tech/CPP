#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);

    cout << "Priority queue elements (sorted order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";  // Access top element
        pq.pop();  // Remove top element
    }

    return 0;
}
