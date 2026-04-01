#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{2,"Bob"},{3,"Charlie"}};

    auto ub = mm.upper_bound(2);
    cout << "Upper bound of 2: " << ub->first << " -> " << ub->second << endl;
}
