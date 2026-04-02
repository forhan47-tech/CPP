#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"Alice"},{2,"Bob"},{3,"Charlie"}};

    for(auto it = um.begin(); it != um.end(); ++it)
        cout << it->first << " -> " << it->second << endl;
}
