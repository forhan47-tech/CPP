#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Total Buckets: " << um.bucket_count() << endl;
    cout << "Load Factor: " << um.load_factor() << endl;

    return 0;
}

