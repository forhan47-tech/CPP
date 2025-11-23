#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front Element: " << q.front() << endl;
    cout << "Back Element: " << q.back() << endl;   

    q.pop();  // Removes 10

    cout << "New Front Element: " << q.front() << endl; 
    
    cout << "Queue Size: " << q.size() << endl;  
    cout << "Is Queue Empty? " << (q.empty() ? "Yes" : "No") << endl;  
    return 0;
}

