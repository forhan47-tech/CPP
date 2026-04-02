#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"}};
    um.rehash(20); // force at least 20 buckets
    cout << "Bucket count after rehash: " << um.bucket_count() << endl;
}
