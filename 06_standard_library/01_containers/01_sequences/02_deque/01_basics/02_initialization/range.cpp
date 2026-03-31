#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d1 = {1, 2, 3, 4};
    deque<int> d2(d1.begin(), d1.end());   // copy all elements
    for (int x : d2) cout << x << " "; 
}
