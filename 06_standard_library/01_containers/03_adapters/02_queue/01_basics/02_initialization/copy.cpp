#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1;
    q1.push(100);
    q1.push(200);

    queue<int> q2(q1); // copy constructor
    cout << "Front of q2: " << q2.front() << endl; 
}
