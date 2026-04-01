#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{3,"Charlie"},{5,"Eve"}};

    auto ub = m.upper_bound(3);
    cout << "Upper bound of 3: " << ub->first << " -> " << ub->second << endl;
}
