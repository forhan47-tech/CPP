#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l(5);   // 5 elements, all 0
    for (int x : l) cout << x << " "; 
}
