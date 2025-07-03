#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;

    cout << "Enter 5 integers to add to the priority queue:\n";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        pq.push(num);  // Push elements into the priority queue
    }

    cout << "Priority queue elements (sorted order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
