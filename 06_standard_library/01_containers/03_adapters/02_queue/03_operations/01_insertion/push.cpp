#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "Back after pushes: " << q.back() << endl; // 20
}
