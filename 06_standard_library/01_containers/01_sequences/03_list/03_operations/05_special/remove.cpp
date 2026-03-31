#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 2, 3, 4, 5};
    l.remove(2); // remove all 2s
    l.remove_if([](int x){ return x % 2 == 0; }); // remove evens
    for (int x : l) cout << x << " "; // 1 3 5
}
