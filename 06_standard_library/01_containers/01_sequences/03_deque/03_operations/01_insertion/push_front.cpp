#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_front(5);
    d.push_front(15);
    
    for (int x : d) cout << x << " "; 
}
