#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<string> ms;
    ms.emplace("Apple");
    ms.emplace("Banana");
    ms.emplace("Banana"); // duplicate allowed

    for (auto &x : ms) cout << x << " "; 
}
