#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40};

    cout << "Forward traversal: ";
    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
}
