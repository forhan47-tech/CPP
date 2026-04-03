#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main() {
    list<int> lst;
    auto it = front_inserter(lst); // output iterator
    *it = 1; 
    *it = 2; 
    *it = 3;
    for(int x : lst) cout << x << " "; 
}
