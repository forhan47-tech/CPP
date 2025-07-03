#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        st.push(num);
    }

    cout << "Stack elements (LIFO order): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
