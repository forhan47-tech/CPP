#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(10); // duplicate ignored

    for(auto x : us)
        cout << x << " "; // order not guaranteed
}
