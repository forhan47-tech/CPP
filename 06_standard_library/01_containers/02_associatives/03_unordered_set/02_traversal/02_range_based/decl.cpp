#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {1,2,3,4};

    for(auto x : us)
        cout << x << " ";
}
