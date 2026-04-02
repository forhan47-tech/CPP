#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {100, 200, 300};
    cout << "Front element: " << l.front() << endl; 

    l.front() = 999; // modify
    cout << "Modified front: " << l.front() << endl; 
}
