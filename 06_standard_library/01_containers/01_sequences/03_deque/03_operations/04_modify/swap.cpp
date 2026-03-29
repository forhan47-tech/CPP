#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d1 = {1, 2};
    deque<int> d2 = {10, 20, 30};
    d1.swap(d2);
    for (int x : d1) cout << x << " "; 
}
