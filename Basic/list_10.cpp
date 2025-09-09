#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 20, 30, 40};

    // remove example
    lst.remove(20); 

    cout << "\nAfter remove: ";
    for (int n : lst) cout << n << " ";

    // remove_if example
    lst.remove_if([](int x) { return x > 25; });

    cout << "\nAfter remove_if (>25): ";
    for (int n : lst) cout << n << " ";
        cout << endl;

    return 0;
}
