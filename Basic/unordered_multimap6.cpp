#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm = {
        {1, "Apple"},
        {2, "Banana"},
        {3, "Cherry"},
        {4, "Date"}
    };

    cout << "Total Buckets: " << umm.bucket_count() << endl;
    cout << "Bucket index for key 2: " << umm.bucket(2) << endl;
    cout << "Elements in bucket 1: " << umm.bucket_size(1) << endl;

    return 0;
}
