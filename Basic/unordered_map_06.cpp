#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Total Buckets: " << um.bucket_count() << endl;
    cout << "Bucket index for key 2: " << um.bucket(2) << endl;

    cout << "Elements in bucket 1: " << um.bucket_size(1) << endl;
    return 0;
}

