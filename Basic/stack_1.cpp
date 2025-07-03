#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    
    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements(LIFO order):\n";
    while (!s.empty()) {  // Loop continues until the stack is empty
        cout << s.top() << " ";  // Access the top element
        s.pop();  // Remove the top element
    }

    cout << "\nStack is now empty!";
    return 0;
}

