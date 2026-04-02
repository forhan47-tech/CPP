#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;
    um.reserve(100); // prepare for 100 elements
    cout << "Bucket count after reserve: " << um.bucket_count() << endl;
}
