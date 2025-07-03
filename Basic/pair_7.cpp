#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<pair<int, string>> dq = {{1, "Red"}, {2, "Blue"}, {3, "Green"}};

    dq.emplace_back(4, "Yellow");  // Add a new pair

    for (const auto& p : dq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

