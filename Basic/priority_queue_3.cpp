#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        pq.push(num);
    }

    cout << "Priority queue elements (sorted order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
