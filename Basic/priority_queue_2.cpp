#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;  // Min-Heap

    pq.push(10);
    pq.push(20);
    pq.push(5);

    cout << "Priority Queue elements (lowest priority first): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
