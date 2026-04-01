#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{3,"Charlie"},{5,"Eve"}};

    auto lb = m.lower_bound(3);
    cout << "Lower bound of 3: " << lb->first << " -> " << lb->second << endl;
}
