#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,string>> v = {{1,"A"},{2,"B"},{2,"C"}};
    unordered_map<int,string> um(v.begin(), v.end()); // duplicates removed

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
