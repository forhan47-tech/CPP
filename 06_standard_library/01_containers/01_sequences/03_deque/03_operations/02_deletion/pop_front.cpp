#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    d.pop_front();
    for (int x : d) cout << x << " "; 
}
