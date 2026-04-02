#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4};

    auto it = l.begin();     // points to first element
    advance(it, 2);          // move iterator forward by 2 steps
    cout << "Element at position 2: " << *it << endl; 
}
