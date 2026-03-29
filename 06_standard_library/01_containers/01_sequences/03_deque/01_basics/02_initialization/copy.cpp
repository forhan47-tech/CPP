#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d1 = {10, 20, 30};
    deque<int> d2(d1);   // copy constructor
    for (int x : d2) cout << x << " "; 
}
