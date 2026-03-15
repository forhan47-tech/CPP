#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"one"}, {2,"two"}};

    for (auto& [key, value] : m) { // references
        value += "!"; // modifies
    }

    for (const auto& [key, value] : m) { // read-only references
        cout << key << " -> " << value << endl;
    }
}
