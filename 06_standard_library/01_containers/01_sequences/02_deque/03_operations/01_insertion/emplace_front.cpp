#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {2, 3};
    d.emplace_front(1);   // construct at front
    for (int x : d) cout << x << " "; 
}
