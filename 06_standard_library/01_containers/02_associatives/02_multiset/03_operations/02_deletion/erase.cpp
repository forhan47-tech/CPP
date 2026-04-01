#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};

    ms.erase(20); // removes ALL 20s
    for (int x : ms) cout << x << " "; // 10 30

    auto it = ms.find(30);
    ms.erase(it); // removes single occurrence
    cout << "\nSize: " << ms.size(); // 1
}
