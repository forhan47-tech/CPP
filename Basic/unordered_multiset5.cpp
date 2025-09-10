#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {10, 20, 30, 40, 50, 60, 70, 80};

    cout << "Total Buckets: " << ums.bucket_count() << endl;
    cout << "Bucket index for key 30: " << ums.bucket(30) << endl;
    cout << "Elements in bucket 3: " << ums.bucket_size(3) << endl;
    return 0;
}
