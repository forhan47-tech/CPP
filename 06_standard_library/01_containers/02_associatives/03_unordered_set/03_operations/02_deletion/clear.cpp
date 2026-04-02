#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {1,2,3};
    us.clear();
    cout << "Size after clear: " << us.size() << endl; 
}
