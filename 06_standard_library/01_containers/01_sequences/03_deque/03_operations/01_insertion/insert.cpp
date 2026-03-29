#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    d.insert(d.begin() + 1, 99);
    for (int x : d) cout << x << " ";
}
