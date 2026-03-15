#include <iostream>
#include <stack>
using namespace std;

void printTop(const stack<int> &s) { // const reference
    cout << "Top element: " << s.top() << endl;
}

int main() {
    stack<int> st;
    st.push(100); st.push(200);
    printTop(st); // safe, efficient
}
