#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.emplace_front(1);  // construct at front
    for (int x : l) cout << x << " "; 
}
