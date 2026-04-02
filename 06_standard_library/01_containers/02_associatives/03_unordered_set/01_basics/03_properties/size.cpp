#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,20,40};
    cout << "Size: " << us.size() << endl; // 4 (duplicate 20 ignored)
}
