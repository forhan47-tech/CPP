#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {10, 20, 30};
    list<int> l2(std::move(l1)); // move constructor
    for(int x : l2) cout << x << " "; 
    cout << "\nSize of l1 after move: " << l1.size() << endl; 
}
