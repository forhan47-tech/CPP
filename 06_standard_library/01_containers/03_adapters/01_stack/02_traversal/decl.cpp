#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Traversing stack:" << endl;
    while(!s.empty()) {
        cout << s.top() << " "; // access top
        s.pop();                // remove top
    }
}
