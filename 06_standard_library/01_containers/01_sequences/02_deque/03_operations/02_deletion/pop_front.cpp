#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    d.pop_front();   // remove first
    for (int x : d) cout << x << " "; 
}
