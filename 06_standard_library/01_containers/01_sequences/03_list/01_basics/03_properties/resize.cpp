#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};
    l.resize(5);   // expands to 5 elements, adds 0s
    for (int x : l) cout << x << " ";
}
