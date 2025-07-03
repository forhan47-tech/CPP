#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    stack<int> st;
    string input;
    int num;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    while (ss >> num) {
        st.push(num);
    }

    cout << "Stack elements (LIFO order): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
