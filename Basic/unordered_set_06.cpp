#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40, 50};

    cout << "Load Factor: " << us.load_factor() << endl; // avg elements per bucket

    us.rehash(20);  // Adjust bucket count
    cout << "New bucket count: " << us.bucket_count() << endl;
    return 0;
}

