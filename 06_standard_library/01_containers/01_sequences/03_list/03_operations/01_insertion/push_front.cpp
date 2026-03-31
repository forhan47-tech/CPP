#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {2, 3};
    l.push_front(1);  // add at front
    for (int x : l) cout << x << " "; 
}
