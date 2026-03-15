#include <iostream>
#include <stack>
using namespace std;

void addElement(stack<int> &s, int val) { // reference
    s.push(val);
}

int main() {
    stack<int> st;
    st.push(10); 
    st.push(20);
    addElement(st, 30);
    cout << "Outside function size=" << st.size() << endl;
}
