#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.assign(5, 7);   // 5 elements, all 7
    for (int x : d) cout << x << " "; 
}
