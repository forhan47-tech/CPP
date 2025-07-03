#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    mm.clear();  // Removes all elements

    cout << "Map size after clear: " << mm.size() << endl;
    cout << "Is Empty? " << (mm.empty() ? "Yes" : "No") << endl;

    return 0;
}
