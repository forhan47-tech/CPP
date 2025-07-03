#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    cout << "Enter 10 integers to push onto the stack:\n";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        st.push(num);  // Push elements onto the stack
    }

    cout << "Stack elements (LIFO order): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
