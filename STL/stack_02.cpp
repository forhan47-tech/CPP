#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top Element: " << st.top() << endl;  

    st.pop();  // Removes 30
    cout << "New Top Element: " << st.top() << endl; 
    
    cout << "Stack Size: " << st.size() << endl;
    cout << "Is Stack Empty? " << (st.empty() ? "Yes" : "No") << endl; 
    return 0;
}

