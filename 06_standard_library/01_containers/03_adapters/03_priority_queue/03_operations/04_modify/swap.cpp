#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);

    priority_queue<int> pq2;
    pq2.push(100);

    pq1.swap(pq2);

    cout << "Top of pq1 after swap: " << pq1.top() << endl; // 100
    cout << "Top of pq2 after swap: " << pq2.top() << endl; // 20
}
