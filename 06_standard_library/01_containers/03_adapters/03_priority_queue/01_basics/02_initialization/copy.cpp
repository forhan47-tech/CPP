#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq1;
    pq1.push(100);
    pq1.push(200);

    priority_queue<int> pq2(pq1); // copy constructor
    cout << "Top of pq2: " << pq2.top() << endl; // 200
}
