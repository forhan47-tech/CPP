#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> v = {
        {1, "A"}, {2, "B"}, {3, "C"}
    };

    map<int, string> m(v.begin(), v.end());   // initialize from vector

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
