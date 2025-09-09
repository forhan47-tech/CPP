#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40, 50};

    auto it = lst.begin();
    advance(it, 2);  // Move iterator to the third element

    cout << "Third element: " << *it << endl;

    return 0;
}
