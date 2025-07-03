#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> um = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}, {4, "Date"}};

    um.rehash(20);  // Adjust bucket count

    cout << "New bucket count: " << um.bucket_count() << endl;

    return 0;
}

