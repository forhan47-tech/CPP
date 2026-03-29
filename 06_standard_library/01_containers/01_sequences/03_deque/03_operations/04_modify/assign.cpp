#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.assign(4, 100);
    for (int x : d) cout << x << " "; 
}
