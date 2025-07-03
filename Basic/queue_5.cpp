#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front Element: " << q.front() << endl;  // Output: 10
    cout << "Back Element: " << q.back() << endl;    // Output: 30

    q.pop();  // Removes 10

    cout << "New Front Element: " << q.front() << endl;  // Output: 20
    
    cout << "Queue Size: " << q.size() << endl;  // Output: 2
    cout << "Is Queue Empty? " << (q.empty() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}

