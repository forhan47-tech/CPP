#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    queue<int> temp = q; // copy
    cout << "Traversing copy:" << endl;
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << "\nOriginal queue size: " << q.size() << endl; // still intact
}
