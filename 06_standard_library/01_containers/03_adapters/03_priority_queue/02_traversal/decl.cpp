#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(30);

    cout << "Traversing priority_queue:" << endl;
    while(!pq.empty()) {
        cout << pq.top() << " "; // access highest priority
        pq.pop();                // remove it
    }
}
