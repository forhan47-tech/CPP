#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(100);
    s.push(200);

    cout << "Top before pop: " << s.top() << endl; 
    s.pop();
    cout << "Top after pop: " << s.top() << endl; 
}
