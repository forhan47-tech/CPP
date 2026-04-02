#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<pair<int,string>> v;
    v.emplace(v.begin(), 1, "Alice"); // construct at beginning
    v.emplace(v.end(), 2, "Bob");     // construct at end

    for(auto &p : v) cout << p.first << " -> " << p.second << endl;
}
