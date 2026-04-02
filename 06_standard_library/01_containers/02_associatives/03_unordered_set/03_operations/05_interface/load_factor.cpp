#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,40};
    cout << "Load factor: " << us.load_factor() << endl;
}
