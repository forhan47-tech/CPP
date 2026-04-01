#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string, greater<int>> mm = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {2, "Duplicate Two"} // duplicate key allowed
    };

    for (auto &p : mm)
        cout << p.first << " -> " << p.second << endl;
}
