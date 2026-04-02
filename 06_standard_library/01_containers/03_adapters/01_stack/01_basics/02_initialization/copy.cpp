#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    s1.push(100);
    s1.push(200);

    stack<int> s2(s1); // copy constructor
    cout << "Top of s2: " << s2.top() << endl; 
}
