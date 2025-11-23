#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 20, 40};

    fl.remove(20); // Remove all 20s

    cout << "After remove(20): ";
    for (int val : fl) cout << val << " ";

    fl.remove_if([](int x) { return x > 30; }); // Remove > 30
    
    cout << "\nAfter remove_if: ";
    for (int val : fl) cout << val << " ";

    return 0;
}
