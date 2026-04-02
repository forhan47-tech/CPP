#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);

    priority_queue<int> temp = pq; // copy
    cout << "Traversing copy:" << endl;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << "\nOriginal size: " << pq.size() << endl; // still intact
}
