#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};
    auto it = l.begin();
    ++it; // points to 2
    l.erase(--it);      // erase 2
    for (int x : l) cout << x << " "; 
}
