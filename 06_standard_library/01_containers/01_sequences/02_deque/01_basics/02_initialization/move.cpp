#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d1 = {10, 20, 30};
    deque<int> d2(std::move(d1)); // move constructor
    for(int x : d2) cout << x << " "; 
    cout << "\nSize of d1 after move: " << d1.size() << endl; 
}
