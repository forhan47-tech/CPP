#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30};

    cout << "Count of 20: " << us.count(20) << endl; 
    cout << "Count of 40: " << us.count(40) << endl; 
}
