#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 30};
    auto it = l.begin();
    ++it; // points to 30
    l.insert(it, 20); // insert 20 before 30
    for(int x : l) cout << x << " "; 
}
