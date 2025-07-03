#include <iostream>
#include <list>
using namespace std;

int main() {
    list<pair<int, string>> lst = {{1, "USA"}, {2, "UK"}, {3, "India"}};

    lst.emplace_back(4, "Canada");  // Add a new pair

    for (const auto& p : lst) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

