#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 40, 50};

    auto it = fl.begin();
    advance(it, 2);  // Move iterator to the third element

    cout << "Third element: " << *it << endl;

    return 0;
}
