#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    auto it = s.begin();
    advance(it, 2);   // move iterator forward by 2
    cout << "Element at index 2: " << *it << endl;
}
