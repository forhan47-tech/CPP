#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{2,"Bob"},{3,"Charlie"}};

    auto lb = mm.lower_bound(2);
    cout << "Lower bound of 2: " << lb->first << " -> " << lb->second << endl;
}
