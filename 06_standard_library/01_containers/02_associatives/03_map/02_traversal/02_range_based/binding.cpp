#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    cout << "Structured binding traversal: ";
    for (auto [key, value] : m) {
        cout << key << " -> " << value << " ";
    }
}
