#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<pair<int,string>> d = { {1,"Alice"}, {3,"Charlie"} };
    d.emplace(d.begin() + 1, 2, "Bob"); // Construct element at position 1

    for(auto &p : d) cout << p.first << " -> " << p.second << endl;
}
