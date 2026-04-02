#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Traversing queue:" << endl;
    while(!q.empty()) {
        cout << q.front() << " "; // access front
        q.pop();                  // remove front
    }
}
