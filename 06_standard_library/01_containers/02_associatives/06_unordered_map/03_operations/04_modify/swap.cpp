#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um1 = {{1,"A"},{2,"B"}};
    unordered_map<int,string> um2 = {{3,"C"},{4,"D"}};

    um1.swap(um2);

    for(auto &p : um1)
        cout << p.first << " -> " << p.second << endl; // now contains 3,4
}
