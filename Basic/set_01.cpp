#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {10, 20, 30, 40, 50};

    set<int, greater<int>> s2 = {10, 20, 30, 40, 50}; 

    cout << "Set 1: ";
    for (int num : s1) {
        cout << num << " ";
    }

    cout << "Set 2: ";
    for (int num : s2) {
        cout << num << " ";
    }

    return 0;
}
