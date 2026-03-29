#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d(5);   // 5 elements, all 0 by default
    for (int x : d) cout << x << " "; 
}
