#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> temp = s; // copy
    cout << "Traversing copy:" << endl;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << "\nOriginal stack size: " << s.size() << endl; // still intact
}
