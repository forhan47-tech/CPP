#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_multimap<int, string> umm1 = {{1, "A"}, {2, "B"}};
    unordered_multimap<int, string> umm2 = {{3, "C"}, {4, "D"}};

    umm1.swap(umm2);

    for (const auto& [k, v] : umm1)
        cout << k << ": " << v << endl;
    return 0;
}
