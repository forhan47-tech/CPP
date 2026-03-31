#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d(4, 100);   // 4 elements, all 100
    for (int x : d) cout << x << " "; 
}
