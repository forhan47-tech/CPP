#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    pq.push(10);
    cout << "Is empty after push? " << (pq.empty() ? "Yes" : "No") << endl;
}
