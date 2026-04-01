#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m.emplace(2, "Bob");
    m.emplace(3, "Charlie");

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
