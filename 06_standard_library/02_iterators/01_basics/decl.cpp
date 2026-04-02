#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40};

    auto it = l.begin();
    cout << "First element: " << *it << endl; 

    ++it; // move forward
    cout << "Second element: " << *it << endl; 

    --it; // move backward
    cout << "Back to first: " << *it << endl; 
}
