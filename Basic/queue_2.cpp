#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    cout << "Enter 5 integers to add to the queue:\n";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        q.push(num);  // Push elements into the queue
    }

    cout << "Queue elements (FIFO order): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
