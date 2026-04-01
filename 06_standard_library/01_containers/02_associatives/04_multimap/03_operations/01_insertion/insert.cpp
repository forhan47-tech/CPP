#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm;
    mm.insert({1,"Alice"});
    mm.insert({2,"Bob"});
    mm.insert({1,"Charlie"}); // duplicate key allowed

    for(auto [k,v] : mm) cout << k << " -> " << v << endl;
}
