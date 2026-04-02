#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main() {
    list<int> l = {10,20,30,40};
    auto it = l.begin();
    advance(it, 2); // move forward 2 steps
    cout << "Element after advancing: " << *it << endl; 
}
