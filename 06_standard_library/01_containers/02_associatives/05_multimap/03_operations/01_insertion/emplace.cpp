#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm;
    mm.emplace(1,"Alice");
    mm.emplace(2,"Bob");
    mm.emplace(1,"Charlie"); // duplicate key

    for(auto [k,v] : mm) cout << k << " -> " << v << endl;
}
