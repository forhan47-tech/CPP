#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {10, 20, 30, 40, 50};

    for (int num : mySet) {
        cout << num << " ";
    }

    return 0;
}
