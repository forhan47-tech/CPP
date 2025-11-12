#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m = {{1, "Apple"}, {3, "Banana"}, {5, "Cherry"}};

    auto lb = m.lower_bound(2);
    cout << "Lower Bound of 2: " << lb->first << " -> " << lb->second << endl;

    auto ub = m.upper_bound(3);
    cout << "Upper Bound of 3: " << ub->first << " -> " << ub->second << endl;
    return 0;
}
