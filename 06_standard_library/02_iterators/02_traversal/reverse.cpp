#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10,20,30};
    for(auto it = l.rbegin(); it != l.rend(); ++it)
        cout << *it << " "; 
}
