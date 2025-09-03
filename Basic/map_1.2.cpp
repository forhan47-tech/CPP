#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{2, "Two"}, {1, "One"}, {3, "Three"}};

    for (auto& [key, value] : m)
        cout << key << " => " << value << "\n";
}
