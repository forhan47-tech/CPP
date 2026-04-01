#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string, greater<int>> m = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"}
    };

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
