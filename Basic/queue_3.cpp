#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        q.push(num);
    }

    cout << "Queue elements (FIFO order): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
