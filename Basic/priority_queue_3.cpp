#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);

    vector<int> v;
    while (!pq.empty()) {
        v.push_back(pq.top());
        pq.pop();
    }

    cout << "Priority queue elements (sorted order): ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}
