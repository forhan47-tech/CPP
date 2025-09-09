#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;  // max-heap by default

    pq.push(10); // Push element
    pq.push(20);
    pq.push(5);

    cout << "Priority queue elements (sorted order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";  
        pq.pop();  
    }

    return 0;
}
