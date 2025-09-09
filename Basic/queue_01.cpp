#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Queue elements(FIFO order): ";
    while (!q.empty()) {  
        cout << q.front() << " ";  
        q.pop();  
    }

    cout << "\nQueue is now empty!";
    return 0;
}

