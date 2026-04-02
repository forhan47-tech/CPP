#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"A"},{2,"B"}};

    auto range = um.equal_range(2);
    cout << "Equal range for key 2: ";
    for(auto it = range.first; it != range.second; ++it)
        cout << it->first << " -> " << it->second << endl;
}
