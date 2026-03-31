#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5, 6};

    l1.splice(l1.end(), l2); // move all of l2 into l1
    for (int x : l1) cout << x << " "; 
}
