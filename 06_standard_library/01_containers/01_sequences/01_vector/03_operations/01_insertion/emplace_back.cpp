#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<pair<int,string>> v;
    v.emplace_back(1,"Alice");
    v.emplace_back(2,"Bob");
    
    for(auto &p : v) cout << p.first << " -> " << p.second << endl;
}
