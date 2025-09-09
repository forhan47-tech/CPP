#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm1 = {{1, "A"}, {2, "B"}};
    multimap<int, string> mm2 = {{3, "C"}, {4, "D"}};

    mm1.swap(mm2);

    for (const auto& [k, v] : mm1)
        cout << k << ": " << v << endl;

    return 0;
}
