#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};
    l.clear();        // remove all
    cout << "Size after clear: " << l.size(); 
}
