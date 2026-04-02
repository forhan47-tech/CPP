#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"Apple"},{2,"Banana"},{3,"Cherry"}};

    for(auto &p : um)
        cout << p.first << " -> " << p.second << endl;
}
