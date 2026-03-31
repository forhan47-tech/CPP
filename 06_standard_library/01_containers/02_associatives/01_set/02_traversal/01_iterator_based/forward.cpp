#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {30, 10, 20};

    cout << "Forward traversal: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " "; // 10 20 30
}
