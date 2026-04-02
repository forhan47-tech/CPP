#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<pair<int,string>> l = { {1,"Alice"}, {3,"Charlie"} };
    auto it = ++l.begin(); // points to Charlie
    l.emplace(it, 2, "Bob"); // construct Bob before Charlie
    for(auto &p : l) cout << p.first << " -> " << p.second << endl;
}
