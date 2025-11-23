#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> v = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    v.emplace_back(4, "Date"); // Add a new pair

    cout << "Pair :\n";
    for (const auto& [key, value] : v)
        cout << key << ": " << value << endl;

    cout << "Pair :\n";
    for (const auto& p : st) {
        cout << p.first << " -> " << p.second << endl;
    }     
    return 0;
}

