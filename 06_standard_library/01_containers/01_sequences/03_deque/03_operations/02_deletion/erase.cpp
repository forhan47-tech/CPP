#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3, 4};
    d.erase(d.begin() + 2); // removes 3
    for (int x : d) cout << x << " "; 
}
