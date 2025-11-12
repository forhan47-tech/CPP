#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {10, 20, 30, 40, 50};

    cout << "Load Factor: " << ums.load_factor() << endl;

    ums.rehash(20);  // Adjust bucket count
    cout << "New bucket count: " << ums.bucket_count() << endl;
    return 0;
}
