#include <iostream>
#include <stack>

using namespace std;
int main() {
    stack<int> s1, s2;


    // Initializing stacks
    s1.push(10);
    s1.push(20);
    s1.push(30);

    s2.push(100);
    s2.push(200);
    s2.push(300);

    // Swapping stacks
    s2.swap(s1);

    cout << "Top of s1 after swap: " << s1.top() << endl;
    cout << "Top of s2 after swap: " << s2.top() << endl;

    return 0;
}

