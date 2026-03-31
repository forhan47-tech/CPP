#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {5, 10, 15, 20};
    auto it = l.begin();
    ++it;
    l.emplace(it, 99);    // construct before 3
    for (int x : l) cout << x << " "; 
}
