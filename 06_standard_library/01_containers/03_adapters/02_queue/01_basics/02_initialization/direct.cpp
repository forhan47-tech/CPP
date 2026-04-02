#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    queue<int> q(d); // queue initialized with deque

    cout << "Front: " << q.front() << endl; 
    cout << "Back: " << q.back() << endl;  
}
