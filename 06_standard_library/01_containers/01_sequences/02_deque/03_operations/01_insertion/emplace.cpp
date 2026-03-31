#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    d.emplace(d.begin() + 1, 99);   // construct 99 at index 1
    for (int x : d) cout << x << " "; 
}
