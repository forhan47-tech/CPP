#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,40};
    cout << "Bucket of 20: " << us.bucket(20) << endl;
}
