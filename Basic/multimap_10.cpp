#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m = {{1, "Apple"}, {3, "Banana"}, {5, "Cherry"}};

    auto it = m.lower_bound(2);
    cout << "Lower Bound of 2: " << it->first << " -> " << it->second << endl;

    auto upper = m.upper_bound(3);
    cout << "Upper Bound of 3: " << upper->first << " -> " << upper->second << endl;

    return 0;
}
