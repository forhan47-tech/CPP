#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {2, "Blueberry"}, {3, "Cherry"}};

    cout << "Is the key exist? " << (mm.count(2) ? "yes" : "no") << endl;

    auto it = mm.find(2);
    cout << "First occurrence of Key 2: " << it->second << endl;

    return 0;
}
