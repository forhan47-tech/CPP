#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<pair<int,string>> s;
    s.emplace(1,"Alice");
    s.emplace(2,"Bob");
    for(auto &p : s) cout << p.first << " -> " << p.second << endl;
}
