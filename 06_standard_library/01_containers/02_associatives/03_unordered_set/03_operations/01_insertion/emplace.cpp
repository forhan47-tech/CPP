#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    unordered_set<string> us;
    us.emplace("Alice");
    us.emplace("Bob");
    us.emplace("Alice"); // ignored (duplicate)
    for(auto &s : us) cout << s << " "; // order not guaranteed
}
