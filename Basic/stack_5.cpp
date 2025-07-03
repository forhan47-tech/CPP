#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top Element: " << myStack.top() << endl;  // Output: 30

    myStack.pop();  // Removes 30

    cout << "New Top Element: " << myStack.top() << endl;  // Output: 20
    
    cout << "Stack Size: " << myStack.size() << endl;
    cout << "Is Stack Empty? " << (myStack.empty() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}

