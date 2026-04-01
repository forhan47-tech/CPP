#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;   // empty map
    m[1] = "Alice";   
    m[2] = "Bob"; 

    for (auto &p : m)
        cout << p.first << " -> " << p.second << endl;
}
