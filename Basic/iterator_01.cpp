#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {1, 2, 3, 4, 5};

    cout << "Forward: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) cout << *it << " ";

    cout << "\nBackward: ";
    for (auto rit = lst.rbegin(); rit != lst.rend(); ++rit) cout << *rit << " ";
    cout << endl;

    return 0;
}

