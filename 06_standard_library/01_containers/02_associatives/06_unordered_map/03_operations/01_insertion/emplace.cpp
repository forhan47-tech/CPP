#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;
    um.emplace(1,"Alice");
    um.emplace(2,"Bob");
    um.emplace(1,"Charlie"); // ignored (duplicate key)

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
