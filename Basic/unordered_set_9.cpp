#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40, 50, 60, 70, 80};

    cout << "Total Buckets: " << us.bucket_count() << endl;
    cout << "Load Factor: " << us.load_factor() << endl;

    return 0;
}

