#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30,40};
    size_t b = us.bucket(20);
    cout << "Bucket " << b << " size: " << us.bucket_size(b) << endl;
}
