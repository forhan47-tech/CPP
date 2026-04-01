#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    auto it = l.begin();
    advance(it, 2);  
    l.erase(it);  // erase single element 

    auto start = l.begin();
    auto end   = next(l.begin(), 2);
    l.erase(start, end); // removes first two elements

    for(int x : l) cout << x << " ";
}
