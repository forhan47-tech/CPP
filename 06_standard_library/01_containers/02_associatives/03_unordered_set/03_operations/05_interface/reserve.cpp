#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;
    us.reserve(100); // prepare for 100 elements
    cout << "Bucket count after reserve: " << us.bucket_count() << endl;
}
