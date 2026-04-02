#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,40};

    us.erase(20); // remove key 20
    auto it = us.find(30);
    if(it != us.end()) us.erase(it); // remove by iterator
    us.erase(us.begin(), us.end()); // remove all

    cout << "Size after erase: " << us.size() << endl; 
}
