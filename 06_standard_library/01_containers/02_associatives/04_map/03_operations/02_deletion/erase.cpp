#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{2,"Bob"},{3,"Charlie"}};

    m.erase(2); // remove by key
    auto it = m.find(1);
    if(it != m.end()) m.erase(it); // remove by iterator

    for(auto [k,v] : m)
        cout << k << " -> " << v << endl;
}
