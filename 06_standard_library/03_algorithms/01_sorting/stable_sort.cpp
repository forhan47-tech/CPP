#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item { int key; char tag; };

int main() {
    vector<Item> v = {{2,'A'},{1,'B'},{2,'C'}};
    stable_sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.key < b.key; });
    for(auto &i : v) cout << i.key << i.tag << " "; 
}
