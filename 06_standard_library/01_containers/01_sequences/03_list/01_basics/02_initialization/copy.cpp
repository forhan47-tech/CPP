#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {10, 20, 30};
    list<int> l2(l1);   // copy of l1
    for (int x : l2) cout << x << " "; 
}
