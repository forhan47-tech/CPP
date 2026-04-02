#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5,3,1,2,2};
    unordered_set<int> us(v.begin(), v.end()); // duplicates removed

    for(auto x : us)
        cout << x << " ";
}
