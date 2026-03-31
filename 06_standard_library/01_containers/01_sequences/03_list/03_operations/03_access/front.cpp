#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    cout << "First element: " << l.front() << endl; 

    l.front() = 99;    // You can also modify it
    cout << "Modified first element: " << l.front() << endl; 
}
