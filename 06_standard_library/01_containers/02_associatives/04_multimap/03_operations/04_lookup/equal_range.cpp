#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"},{3,"David"}};

    auto range = mm.equal_range(1);
    cout << "Elements with key 1:\n";
    for(auto it = range.first; it != range.second; ++it)
        cout << it->first << " -> " << it->second << endl;
}
