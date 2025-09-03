#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40};

    cout << "First element: " << l.front() << endl;

    cout << "Last element: " << l.back() << endl;

    l.clear(); // Clear the list
    
    cout << "Size: " << l.size() << endl;
    cout << "Is empty? " << (l.empty() ? "Yes" : "No") << endl;

    return 0;
}

