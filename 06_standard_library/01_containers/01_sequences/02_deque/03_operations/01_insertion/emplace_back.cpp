#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<pair<int,string>> d;
    d.emplace_back(1,"Alice");
    d.emplace_back(2,"Bob");
    
    for(auto &p : d) cout << p.first << " -> " << p.second << endl;
}
