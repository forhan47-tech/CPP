#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> queue;

    // Enqueue
    queue.push_back(1);
    queue.push_back(2);
    queue.push_back(3);

    // Dequeue
    while (!queue.empty()) {
        cout << "Processing: " << queue.front() << endl;
        queue.pop_front();
    }

    return 0;
}
