#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,20,40}; // duplicate 20 ignored

    for(auto x : us)
        cout << x << " "; // order not guaranteed
}
