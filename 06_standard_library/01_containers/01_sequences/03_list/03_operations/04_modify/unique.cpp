#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 1, 2, 2, 3, 3};
    l.unique();
    for (int x : l) cout << x << " "; 
}
