#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {5, 2, 4, 1, 3};
    l.reverse(); // reverse order
    for (int x : l) cout << x << " "; 
}
