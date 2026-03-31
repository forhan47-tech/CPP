#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    d.resize(5);   // expands to 5 elements, adds 0s
    for (int x : d) cout << x << " "; 
}
