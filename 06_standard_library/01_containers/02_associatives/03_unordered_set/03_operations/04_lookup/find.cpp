#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30};

    auto it = us.find(20);
    if(it != us.end())
        cout << "Found: " << *it << endl;
    else
        cout << "Not found" << endl;
}
