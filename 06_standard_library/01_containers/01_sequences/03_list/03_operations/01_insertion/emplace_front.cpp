#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<pair<int,string>> l;
    l.emplace_front(2,"Bob");
    for(auto &p : l) cout << p.first << " -> " << p.second << endl;
}
