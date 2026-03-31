#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {10, 20};
    l1.swap(l2);       // swap contents
    for (int x : l1) cout << x << " "; 
}
