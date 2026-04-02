#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1;
    q1.push(10);
    q1.push(20);

    queue<int> q2(std::move(q1)); // move constructor
    cout << "Size of q1 after move: " << q1.size() << endl; 
    cout << "Front of q2: " << q2.front() << endl; 
}
