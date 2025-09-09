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
    while (!s.empty()) {  
        cout << s.top() << " ";  
        s.pop();  
    }

    cout << "\nStack is now empty!";
    return 0;
}

