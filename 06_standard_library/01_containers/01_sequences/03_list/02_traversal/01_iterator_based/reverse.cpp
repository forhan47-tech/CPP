#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40};

    cout << "Reverse traversal: ";
    for (auto rit = l.rbegin(); rit != l.rend(); ++rit) {
        cout << *rit << " ";
    }
}
