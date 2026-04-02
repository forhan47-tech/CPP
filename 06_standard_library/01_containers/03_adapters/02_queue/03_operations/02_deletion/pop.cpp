#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(100);
    q.push(200);

    cout << "Front before pop: " << q.front() << endl; // 100
    q.pop();
    cout << "Front after pop: " << q.front() << endl;  // 200
}
