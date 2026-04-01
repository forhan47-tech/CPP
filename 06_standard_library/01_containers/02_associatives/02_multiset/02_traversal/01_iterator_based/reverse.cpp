#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {30, 10, 20, 20};

    cout << "Reverse traversal: ";
    for (auto rit = ms.rbegin(); rit != ms.rend(); ++rit)
        cout << *rit << " ";  // Output: 30 20 20 10
}
