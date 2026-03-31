#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.assign(5, 7);   // 5 elements, all 7
    for (int x : l) cout << x << " "; 
}
