#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    multiset<pair<int,string>> ms;
    ms.emplace(1,"Alice");
    ms.emplace(1,"Alice"); // duplicate preserved
    ms.emplace(2,"Bob");
    for(auto &p : ms) cout << p.first << " -> " << p.second << endl;
}
