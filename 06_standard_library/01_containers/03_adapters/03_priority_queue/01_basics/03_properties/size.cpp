#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(100);
    pq.push(200);
    pq.push(300);

    cout << "Size: " << pq.size() << endl;
}
