#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    s1.push(10);
    s1.push(20);

    stack<int> s2 = move(s1);  // Transfers ownership of s1 to s2 without copying

    cout << "Top of New Stack: " << s2.top() << endl;  // Output: 20

    return 0;
}

