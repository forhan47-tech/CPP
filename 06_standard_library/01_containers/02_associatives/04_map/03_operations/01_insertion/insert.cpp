#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m;
    m.insert({1,"Alice"});
    m.insert({2,"Bob"});
    m.insert({1,"Charlie"}); // ignored (duplicate key)

    for(auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
