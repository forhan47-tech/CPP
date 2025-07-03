#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40, 50};

    us.rehash(20);  // Adjust bucket count

    cout << "New bucket count: " << us.bucket_count() << endl;

    return 0;
}

