#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um1 = {{1,"X"}, {2,"Y"}};
    unordered_map<int,string> um2(std::move(um1)); // move constructor

    for(auto &p : um2)
        cout << p.first << " -> " << p.second << endl;

    cout << "Size of um1 after move: " << um1.size() << endl; 
}
