#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    s1.push(10);
    s1.push(20);

    stack<int> s2(std::move(s1)); // move constructor
    cout << "Size of s1 after move: " << s1.size() << endl; 
    cout << "Top of s2: " << s2.top() << endl; 
}
