#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.emplace_back(3);   // construct at end
    for (int x : l) cout << x << " ";
}
