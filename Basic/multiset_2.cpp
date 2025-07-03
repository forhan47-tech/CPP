#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 30, 40, 50};

    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
