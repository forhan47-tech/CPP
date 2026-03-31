#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40, 50};

    cout << "Forward traversal: ";
    for (auto &x : lst) {
        cout << x << " ";   // directly access each element
    }
    return 0;
}
