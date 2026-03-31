#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {2, 3};
    l.push_back(4);   // add at end
    for (int x : l) cout << x << " "; 
}
