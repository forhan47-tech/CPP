#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {10, 20, 30, 40, 50};

    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
