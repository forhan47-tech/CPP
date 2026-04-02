#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um1 = {{1,"A"}, {2,"B"}};
    unordered_map<int,string> um2 = {{2,"X"}, {3,"C"}};

    um1.merge(um2);

    for(auto &p : um1)
        cout << p.first << " -> " << p.second << endl;
}
