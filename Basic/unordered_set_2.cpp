#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40, 50};

    for (auto it = us.begin(); it != us.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
