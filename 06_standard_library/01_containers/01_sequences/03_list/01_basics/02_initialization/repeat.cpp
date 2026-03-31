#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l(4, 100);   // 4 elements, all 100
    for (int x : l) cout << x << " "; 
}
