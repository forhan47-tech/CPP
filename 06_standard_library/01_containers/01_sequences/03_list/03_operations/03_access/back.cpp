#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    cout << "Last element: " << l.back() << endl; 

    l.back() = 77;   // You can also modify it
    cout << "Modified last element: " << l.back() << endl; 
}
