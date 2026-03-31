#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;   // empty deque

    dq.push_back(5);
    dq.push_back(10);
    
    for (int x : dq) cout << x << " ";
}
