#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1;
    q1.push(10);
    q1.push(20);

    queue<int> q2;
    q2.push(100);

    q1.swap(q2);

    cout << "Front of q1 after swap: " << q1.front() << endl; // 100
    cout << "Front of q2 after swap: " << q2.front() << endl; // 10
}
