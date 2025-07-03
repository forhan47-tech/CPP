#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> v = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    v.emplace_back(4, "Date");  // Add a new pair

    for (const auto& p : v) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

