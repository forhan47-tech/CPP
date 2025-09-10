#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm = {
        {1, "Init"},
        {2, "Load"},
        {1, "Retry"},
        {3, "Start"}
    };

    for (auto& [key, value] : umm)
        cout << key << ": " << value << "\n";

    return 0;
}
