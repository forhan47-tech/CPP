#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40};

    cout << "First element: " << lst.front() << endl;
    cout << "Last element: " << lst.back() << endl;

    lst.clear(); // Clear the list
    
    cout << "Size: " << lst.size() << endl;
    cout << "Is empty? " << (lst.empty() ? "Yes" : "No") << endl;
    return 0;
}

