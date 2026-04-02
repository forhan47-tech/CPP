#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"},{3,"C"}};
    size_t b = um.bucket(2);
    cout << "Bucket " << b << " size: " << um.bucket_size(b) << endl;
}
