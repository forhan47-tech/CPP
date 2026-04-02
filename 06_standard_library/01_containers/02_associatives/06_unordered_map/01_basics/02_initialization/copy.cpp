#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um1 = {{1,"A"},{2,"B"}};
    unordered_map<int,string> um2(um1); // copy of um1

    for(auto &p : um2)
        cout << p.first << " -> " << p.second << endl;
}
