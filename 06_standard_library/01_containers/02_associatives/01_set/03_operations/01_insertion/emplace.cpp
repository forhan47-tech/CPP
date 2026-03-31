#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    s.emplace("Apple");
    s.emplace("Banana");

    for (auto &x : s) cout << x << " "; 
}
