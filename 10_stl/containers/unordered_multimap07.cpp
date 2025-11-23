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

    umm.rehash(20);  // Force bucket count
    cout << "New bucket count: " << umm.bucket_count() << endl;
    cout << "Load Factor: " << umm.load_factor() << endl;
    return 0;
}
