#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {100, 200, 300, 400};

    auto it = lst.begin();
    ++it;  // Move forward
    cout << "Next element: " << *it << endl;  

    --it;  // Move backward
    cout << "Previous element: " << *it << endl; 

    return 0;
}

