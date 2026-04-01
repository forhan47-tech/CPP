#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;   // empty map
    
    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
