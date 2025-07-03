#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    m.clear();  // Removes all elements

    cout << "Map size after clear: " << m.size() << endl;
    cout << "Is Empty? " << (m.empty() ? "Yes" : "No") << endl;

    return 0;
}
