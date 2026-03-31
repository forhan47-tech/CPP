#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {2, 3, 4};
    d.push_front(1);   // add at front
    for (int x : d) cout << x << " "; 
}
