#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq; 

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Highest Priority Element: " << pq.top() << endl;  

    pq.pop();  // Removes 30

    cout << "New Top Element: " << pq.top() << endl;  

    cout << "Size of Priority Queue: " << pq.size() << endl;  
    
    cout << "Is Priority Queue Empty? " << (pq.empty() ? "Yes" : "No") << endl;  

    return 0;
}



