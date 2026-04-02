#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"Alice"},{2,"Bob"},{3,"Charlie"}};

    auto it = um.find(2);
    if(it != um.end())
        cout << "Found key 2 -> " << it->second << endl;
    else
        cout << "Key not found" << endl;
}
