#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(100);
    pq.push(200);
    pq.push(150);

    cout << "Top before pop: " << pq.top() << endl; // 200
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl;  // 150
}
