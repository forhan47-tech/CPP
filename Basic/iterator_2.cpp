#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {100, 200, 300, 400};

    auto it = lst.begin();
    ++it;  // Move forward
    cout << "Next element: " << *it << endl;  // Output: 200

    --it;  // Move backward
    cout << "Previous element: " << *it << endl;  // Output: 100

    return 0;
}

