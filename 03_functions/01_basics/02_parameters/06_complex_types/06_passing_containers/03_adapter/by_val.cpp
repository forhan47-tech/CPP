#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s) { // copy
    cout << "Inside function: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(1); st.push(2); st.push(3);
    showStack(st);
    cout << "Outside function size=" << st.size() << endl; // still 3
}
