#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);

    priority_queue<int> pq2(std::move(pq1)); // move constructor
    cout << "Size of pq1 after move: " << pq1.size() << endl; // 0
    cout << "Top of pq2: " << pq2.top() << endl; // 20
}
