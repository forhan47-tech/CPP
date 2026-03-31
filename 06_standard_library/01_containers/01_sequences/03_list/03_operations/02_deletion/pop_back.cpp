#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4};
    l.pop_back();   // remove last
    for (int x : l) cout << x << " "; 
}
