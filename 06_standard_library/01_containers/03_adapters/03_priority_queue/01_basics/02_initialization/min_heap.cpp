#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << "Top (min-heap): " << pq.top() << endl; // 5
}
