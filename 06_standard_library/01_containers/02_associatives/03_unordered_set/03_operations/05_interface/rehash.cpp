#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10,20,30};
    us.rehash(20); // force at least 20 buckets
    cout << "Bucket count after rehash: " << us.bucket_count() << endl;
}
