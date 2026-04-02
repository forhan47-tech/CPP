#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;
    um.insert({1,"Alice"});
    um.insert({2,"Bob"});
    um.insert({1,"Charlie"}); // ignored (key 1 already exists)

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
