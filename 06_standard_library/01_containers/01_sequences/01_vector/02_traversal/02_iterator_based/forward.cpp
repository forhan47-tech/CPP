#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    cout << "Forward iteration: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";  // dereference iterator
    return 0;
}
