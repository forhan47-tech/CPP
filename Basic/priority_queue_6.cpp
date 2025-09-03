#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;  // Default: Max Heap

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Highest Priority Element: " << pq.top() << endl;  // Output: 30

    pq.pop();  // Removes 30

    cout << "New Top Element: " << pq.top() << endl;  // Output: 20

    cout << "Size of Priority Queue: " << pq.size() << endl;  // Output: 2
    
    cout << "Is Priority Queue Empty? " << (pq.empty() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}



