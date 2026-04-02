#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> us;
    us.emplace("Alice");
    us.emplace("Bob");
    us.emplace("Alice"); // duplicate ignored

    for(auto &x : us)
        cout << x << " ";
}
