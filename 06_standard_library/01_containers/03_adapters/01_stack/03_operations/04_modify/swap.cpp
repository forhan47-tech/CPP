#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    s1.push(10);
    s1.push(20);

    stack<int> s2;
    s2.push(100);

    s1.swap(s2);

    cout << "Top of s1 after swap: " << s1.top() << endl; 
    cout << "Top of s2 after swap: " << s2.top() << endl; 
}
