#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {1, 2, 3, 4};
    list<int> l2(l1.begin(), l1.end());   // copy all elements
    for (int x : l2) cout << x << " "; 
}
