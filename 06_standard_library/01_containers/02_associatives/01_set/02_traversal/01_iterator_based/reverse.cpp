#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {30, 10, 20};

    cout << "Reverse traversal: ";
    for (auto rit = s.rbegin(); rit != s.rend(); ++rit)
        cout << *rit << " "; // 30 20 10
}
