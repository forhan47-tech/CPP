#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30, 40};
    auto it = ms.begin();
    advance(it, 2);   // move iterator 2 steps forward
    cout << "Element at index 2: " << *it << endl; 
}
