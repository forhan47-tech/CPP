#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};
    auto it = l.begin();
    ++it; // points to 2
    l.insert(it, 99);   // insert before 2
    for (int x : l) cout << x << " ";
}
